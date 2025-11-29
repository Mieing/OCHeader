@class NSString, NSMutableArray;

@interface MMGPUGLProgram : NSObject {
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
}

@property (nonatomic) BOOL initialized;
@property (copy, nonatomic) NSString *vertexShaderLog;
@property (copy, nonatomic) NSString *fragmentShaderLog;
@property (copy, nonatomic) NSString *programLog;

- (id)initWithVertexShaderString:(id)a0 fragmentShaderString:(id)a1;
- (id)initWithVertexShaderString:(id)a0 fragmentShaderFilename:(id)a1;
- (id)initWithVertexShaderFilename:(id)a0 fragmentShaderFilename:(id)a1;
- (BOOL)compileShader:(unsigned int *)a0 type:(unsigned int)a1 string:(id)a2;
- (void)addAttribute:(id)a0;
- (unsigned int)attributeIndex:(id)a0;
- (unsigned int)uniformIndex:(id)a0;
- (BOOL)link;
- (void)use;
- (void)validate;
- (void)dealloc;
- (void).cxx_destruct;

@end
