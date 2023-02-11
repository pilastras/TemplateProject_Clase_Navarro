class Triangle {
public:
    Triangle() {}

    void render() {
        glPushMatrix();
        glTranslatef(0.0f, 3.0f, 0.0f);
        glBegin(GL_TRIANGLES);
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(-0.75f, -0.75f, 0.0f);
        glVertex3f(0.75f, -0.75f, 0.0f);
        glEnd();
        glPopMatrix();
    }
};
