@interface WADynamicBackgroundGLContext : MMObject

@property (nonatomic) unsigned int program;

+ (id)contextWithVertexShaderPath:(id)a0 fragmentShaderPath:(id)a1;

- (id)initWithVertexShader:(id)a0 fragmentShader:(id)a1;
- (void)active;
- (void)bindAttribs:(float *)a0;
- (void)bindAttribsUV:(float *)a0;
- (void)drawTriangles:(float *)a0 vertexCount:(int)a1;
- (void)drawTrianglesWithVBO:(unsigned int)a0 vertexCount:(int)a1;
- (void)drawTrianglesWithVAO:(unsigned int)a0 vertexCount:(int)a1;
- (void)drawGeometry:(id)a0;
- (void)setUniform1i:(id)a0 value:(int)a1;
- (void)setUniform1f:(id)a0 value:(float)a1;
- (void)setUniform2fv:(id)a0 value:(union _GLKVector2 { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; float x2[2]; })a1;
- (void)setUniform3fv:(id)a0 value:(union _GLKVector3 { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; float x3[3]; })a1;
- (void)setUniform4fv:(id)a0 value:(union _GLKVector4 { struct { float x0; float x1; float x2; float x3; } x0; struct { float x0; float x1; float x2; float x3; } x1; struct { float x0; float x1; float x2; float x3; } x2; float x3[4]; })a1;
- (void)setUniformMatrix4fv:(id)a0 value:(union _GLKMatrix4 { struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; } x0; float x1[16]; })a1;
- (void)bindTexture:(id)a0 to:(unsigned int)a1 uniformName:(id)a2;
- (void)bindCubeTexture:(id)a0 to:(unsigned int)a1 uniformName:(id)a2;
- (void)bindTextureName:(unsigned int)a0 to:(unsigned int)a1 uniformName:(id)a2;
- (void)setupShader:(id)a0 fragmentShaderContent:(id)a1;

@end
