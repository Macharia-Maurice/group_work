import pyglet
from pyglet import gl
import platform

# Window dimensions
window_width = 800
window_height = 400

# Font variables
font_size = 36
spacing = 20

# Font name (platform-based)
font_file = "Arial" if platform.system() == 'Windows' else "FreeSans"

# Create window
window = pyglet.window.Window(width=window_width, height=window_height, caption="JKUAT ROCKS Banner", resizable=True)

# Create batch
batch = pyglet.graphics.Batch()

# Labels
jkuat_label = None
rocks_label = None
info_label = None

def update_labels():
    global jkuat_label, rocks_label, info_label, batch

    batch = pyglet.graphics.Batch()

    # Temporary labels to get actual pixel widths
    temp_jkuat = pyglet.text.Label(
        "JKUAT", font_name=font_file, font_size=font_size)
    temp_rocks = pyglet.text.Label(
        "ROCKS", font_name=font_file, font_size=font_size)

    width1 = temp_jkuat.content_width
    width2 = temp_rocks.content_width
    adjusted_spacing = spacing
    total_width = width1 + adjusted_spacing + width2
    start_x = (window.width - total_width) / 2
    y_position = window.height // 2

    # Actual labels
    jkuat_label = pyglet.text.Label(
        "JKUAT", font_name=font_file, font_size=font_size,
        x=start_x, y=y_position,
        color=(0, 204, 0, 255), anchor_x='left', anchor_y='center',
        batch=batch)

    rocks_label = pyglet.text.Label(
        "ROCKS", font_name=font_file, font_size=font_size,
        x=start_x + width1 + adjusted_spacing, y=y_position,
        color=(255, 0, 0, 255), anchor_x='left', anchor_y='center',
        batch=batch)

    info_label = pyglet.text.Label(
        f"Font Size: {font_size}  |  Spacing: {spacing} (Use +/- to resize, A/S to adjust spacing)",
        font_name=font_file, font_size=12,
        x=10, y=10, anchor_x='left', anchor_y='bottom',
        color=(255, 255, 255, 255), batch=batch)

@window.event
def on_draw():
    window.clear()
    gl.glClearColor(0.6, 0.4, 0.2, 1.0)
    batch.draw()

@window.event
def on_key_press(symbol, modifiers):
    global font_size, spacing

    if symbol == pyglet.window.key.ESCAPE:
        pyglet.app.exit()
    elif symbol in (pyglet.window.key.PLUS, pyglet.window.key.EQUAL):
        font_size += 4
    elif symbol == pyglet.window.key.MINUS and font_size > 8:
        font_size -= 4
    elif symbol == pyglet.window.key.S:
        spacing += 5
    elif symbol == pyglet.window.key.A and spacing > 5:
        spacing -= 5

    update_labels()

@window.event
def on_resize(width, height):
    update_labels()

def main():
    update_labels()
    pyglet.app.run()

if __name__ == "__main__":
    main()
