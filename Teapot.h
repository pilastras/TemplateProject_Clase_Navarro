class Teapot {
public:
    Teapot() {}

    void render() {
        glPushMatrix();
        glTranslatef(3.0f, 0.0f, 0.0f);
        glutSolidTeapot(0.5);
        glPopMatrix();
    }
};
