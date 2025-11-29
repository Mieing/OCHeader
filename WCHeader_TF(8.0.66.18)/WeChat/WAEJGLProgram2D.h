@interface WAEJGLProgram2D : NSObject

@property (readonly, nonatomic) unsigned int program;
@property (readonly, nonatomic) unsigned int screen;

+ (int)compileShaderSource:(const char *)a0 type:(unsigned int)a1;
+ (void)linkProgram:(unsigned int)a0;

- (id)initWithVertexShader:(const char *)a0 fragmentShader:(const char *)a1;
- (void)dealloc;
- (void)bindAttributeLocations;
- (void)getUniforms;

@end
