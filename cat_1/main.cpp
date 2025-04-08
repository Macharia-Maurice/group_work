#include <GL/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <FTGL/ftgl.h>
#include <iostream>

// Font variables
FTFont* font = NULL;
float fontSize = 36.0f;
float spacing = 20.0f;

// Font path based on OS
#ifdef _WIN32
const char* fontFile = "C:\\Windows\\Fonts\\arial.ttf";
#else
const char* fontFile = "/usr/share/fonts/truetype/freetype/FreeSans.ttf";
#endif

// Window dimensions
int windowWidth = 800;
int windowHeight = 400;

// Render text with specified color
void renderText(const char* text, float x, float y, float r, float g, float b) {
    glColor3f(r, g, b);
    glPushMatrix();
    glTranslatef(x, y, 0);
    font->Render(text);
    glPopMatrix();
}

// Display function
void display() {
    glClearColor(0.6f, 0.4f, 0.2f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    float adjustedSpacing = spacing * (fontSize / 36.0f);
    float charWidth = fontSize * 0.6f;
    float width1 = charWidth * 5;  // "JKUAT"
    float width2 = charWidth * 5;  // "ROCKS"
    float totalWidth = width1 + adjustedSpacing + width2;
    float startX = (windowWidth - totalWidth) / 2.0f;

    // Render text
    renderText("JKUAT", startX, windowHeight / 2, 0.0f, 0.8f, 0.0f);
    renderText("ROCKS", startX + width1 + adjustedSpacing, windowHeight / 2, 1.0f, 0.0f, 0.0f);

    // Show current font size
    char sizeInfo[50];
    snprintf(sizeInfo, sizeof(sizeInfo), "Font Size: %.1f (Use +/- to adjust)", fontSize);

    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(10, windowHeight - 20);
    for (int i = 0; sizeInfo[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, sizeInfo[i]);
    }

    glutSwapBuffers();
}

// Handle window resizing
void reshape(int width, int height) {
    windowWidth = width;
    windowHeight = height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, width, 0, height);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

// Handle keyboard input
void keyboard(unsigned char key, int x, int y) {
    if (key == '+' || key == '=') {
        fontSize += 4.0f;
        font->FaceSize(fontSize);
    }
    else if (key == '-' || key == '_') {
        if (fontSize > 8.0f) {
            fontSize -= 4.0f;
            font->FaceSize(fontSize);
        }
    }
    else if (key == 27) {  // ESC key
        if (font) delete font;
        exit(0);
    }
    else if (key == 's' || key == 'S') {
        spacing += 5.0f;
    }
    else if (key == 'a' || key == 'A') {
        if (spacing > 5.0f) {
            spacing -= 5.0f;
        }
    }
    glutPostRedisplay();
}

// Initialize FTGL font
bool initFont() {
    font = new FTGLTextureFont(fontFile);
    if (font->Error()) {
        delete font;
        return false;
    }
    font->FaceSize(fontSize);
    return true;
}

int main(int argc, char** argv) {
    // Initialize GLUT
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("JKUAT ROCKS Banner");

    // Initialize font
    if (!initFont()) {
        return 1;
    }

    // Set up callbacks
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);

    // Enter main loop
    glutMainLoop();

    return 0;
}