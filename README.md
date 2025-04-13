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

📁 **Source File**: [banner.cpp](cat_1/banner.cpp)  

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

📁 **Source File**: [banner.py](jkuat_banner.py)  

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
![Default Banner](demo/default.png)  
- Font size: 36px  
- Spacing: 20px  

### **Adjusted View**  
![Scaled Banner](demo/scaled.png)  
- Font size increased to 48px  
- Spacing increased to 30px  

---

## **Presentation Slides**  
For a detailed comparison of implementations, refer to:  
📊 [Implementation Overview PPT](Presentation.pptx)  

---

## **Contributors**

<a href="https://github.com/ngure1">
  <img src="https://img.shields.io/badge/Joseph_Ngure-SCT211--0008/2022-0366d6?style=for-the-badge&logo=github&logoColor=white" alt="Joseph Ngure">
</a>

<a href="https://github.com/Macharia-Maurice">
  <img src="https://img.shields.io/badge/Macharia_Maurice-SCT211--0010/2022-0366d6?style=for-the-badge&logo=github&logoColor=white" alt="Macharia Maurice">
</a>

<a href="https://github.com/kingoriwangechi">
  <img src="https://img.shields.io/badge/Florence_Kingori-SCT211--0063/2022-0366d6?style=for-the-badge&logo=github&logoColor=white" alt="Florence Kingori">
</a>

<a href="https://github.com/theurikarue">
  <img src="https://img.shields.io/badge/Bonface_Theuri-SCT211--0573/2022-0366d6?style=for-the-badge&logo=github&logoColor=white" alt="Bonface Theuri">
</a>

--- 

🚀 **JKUAT ROCKS!** 🚀
