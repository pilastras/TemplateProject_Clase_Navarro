class Cube {
public:
    Cube() {}

    void render() {
        glPushMatrix();
        glTranslatef(3.0f, 2.0f, 0.0f);
        glRotatef(45.0f, 0.0f, 90.0f, 45.0f);
        glRotatef(90.0f, 1.0f, 0.0f, 0.0f);
        glutSolidCube(0.5f);
        glPopMatrix();
    }
};
