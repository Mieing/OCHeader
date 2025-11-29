@class NSMutableDictionary;

@interface TXCGlProgram : NSObject

@property (readonly, nonatomic) unsigned int program;
@property (retain, nonatomic) NSMutableDictionary *uniforms;
@property (retain, nonatomic) NSMutableDictionary *attributes;

- (id)initWithVertex:(id)a0 fragment:(id)a1;
- (void)dealloc;
- (unsigned int)setupProgramWithVertex:(id)a0 fragment:(id)a1;
- (void)use;
- (unsigned int)compileShader:(id)a0 withType:(unsigned int)a1;
- (BOOL)checkLinkResult:(unsigned int)a0;
- (unsigned int)uniformIndexOf:(id)a0;
- (unsigned int)attributeIndexOf:(id)a0;
- (void)setInt:(int)a0 forUniformName:(id)a1;
- (void)setFloat:(float)a0 forUniformName:(id)a1;
- (void)setVec2:(struct GPUVector2 { float x0; float x1; })a0 forUniformName:(id)a1;
- (void)setVec4:(struct GPUVector4 { float x0; float x1; float x2; float x3; })a0 forUniformName:(id)a1;
- (void).cxx_destruct;

@end
