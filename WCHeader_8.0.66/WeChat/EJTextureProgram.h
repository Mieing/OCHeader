@interface EJTextureProgram : NSObject {
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragmentShader;
    unsigned int _position;
    unsigned int _coords;
    unsigned int _texture;
    unsigned int _vao;
    unsigned int _vbo;
    unsigned int _ebo;
}

@property (readonly, nonatomic) BOOL ready;

- (void)dealloc;
- (BOOL)create:(const char *)a0 fragmentsShader:(const char *)a1;
- (void)use;
- (void)destroy;
- (BOOL)compileShader:(const char *)a0 withType:(unsigned int)a1 shaderHandle:(unsigned int *)a2;

@end
