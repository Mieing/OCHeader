@class NSString, NSMutableArray;

@interface LSGLProgram : NSObject {
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

- (void).cxx_destruct;
- (void)validate;
- (void)addAttribute:(id)a0;
- (BOOL)link;
- (void)dealloc;
- (void)use;
- (id)initWithVertexShaderString:(id)a0 fragmentShaderString:(id)a1;
- (BOOL)compileShader:(unsigned int *)a0 type:(unsigned int)a1 string:(id)a2;
- (unsigned int)attributeIndex:(id)a0;
- (unsigned int)uniformIndex:(id)a0;
- (unsigned int)getProgram;

@end
