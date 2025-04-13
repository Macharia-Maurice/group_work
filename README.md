# **Group 6: ICS 2311 Computer Graphics Project**  
**JKUAT Freshers Bash Banner - "JKUAT ROCKS"**  

## **Project Overview**  
This project implements an OpenGL-based banner for the JKUAT Freshers Bash event, displaying the text **"JKUAT ROCKS"** with:  
- **"JKUAT"** in **green** (`#00CC00`)  
- **"ROCKS"** in **red** (`#FF0000`)  
- **Brown background** (`#996633`)  
- **Dynamic text resizing** and **spacing adjustment**  

### **Key Features**  
✔ **Two implementations**:  
   - **C++** (using OpenGL, GLUT, and FTGL)  
   - **Python** (using Pyglet)  
✔ **Interactive controls** for adjusting font size and spacing  
✔ **Cross-platform compatibility**  

---

## **Implementation Details**  
### **1. C++ Implementation**  
**Libraries Used**: OpenGL, GLUT, FTGL  
**Key Features**:  
- High-quality text rendering with FreeType  
- Real-time adjustments via keyboard input  

📁 **Source File**: [banner.cpp](cpp_implementation/group_work/banner.cpp)  

#### **How to Run**  
1. Install dependencies via vcpkg:  
   ```powershell
   vcpkg install opengl glut ftgl
   ```
2. Compile and run:  
   ```bash
   g++ -o banner banner.cpp -lGL -lGLU -lglut -lfreetype
   ./banner
   ```

#### **Controls**  
- `+`/`-`: Adjust font size  
- `S`/`A`: Modify spacing  
- `ESC`: Exit  

---

### **2. Python Implementation**  
**Libraries Used**: Pyglet  
**Key Features**:  
- Simplified code structure  
- Built-in font rendering  

📁 **Source File**: [banner.py](python_implementation/jkuat_banner.py)  

#### **How to Run**  
1. Install Pyglet:  
   ```bash
   pip install pyglet
   ```
2. Execute:  
   ```bash
   python banner.py
   ```

#### **Controls**  
Same as C++ implementation.  

---

## **Output Examples**  
### **Default View**  
![Default Banner](#)  
- Font size: 36px  
- Spacing: 20px  

### **Adjusted View**  
![Scaled Banner](#)  
- Font size increased to 48px  
- Spacing increased to 30px  

---

## **Presentation Slides**  
For a detailed comparison of implementations, refer to:  
📊 [Implementation Overview PPT](Presentation.pptx)  

---

## **Contributors**

<div align="center">

| Contributor | Registration Number | GitHub |
|-------------|---------------------|--------|
| Joseph Ngure | SCT211-0008/2022 | [![GitHub](https://img.shields.io/badge/GitHub-Profile-blue?style=flat-square&logo=github)](https://github.com/ngure1) |
| Macharia Maurice | SCT211-0010/2022 | [![GitHub](https://img.shields.io/badge/GitHub-Profile-blue?style=flat-square&logo=github)](https://github.com/Macharia-Maurice) |
| Florence Kingori | SCT211-0063/2022 | [![GitHub](https://img.shields.io/badge/GitHub-Profile-blue?style=flat-square&logo=github)](https://github.com/kingoriwangechi) |
| Bonface Theuri | SCT211-0573/2022 | [![GitHub](https://img.shields.io/badge/GitHub-Profile-blue?style=flat-square&logo=github)](https://github.com/theurikarue) |

</div>


--- 

🚀 **JKUAT ROCKS!** 🚀
