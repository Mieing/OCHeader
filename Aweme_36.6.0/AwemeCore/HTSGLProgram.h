@class HTSGLContext, NSString, NSMutableArray;

@interface HTSGLProgram : NSObject {
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int program;
    unsigned int vertShader;
    unsigned int fragShader;
}

@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) BOOL initialized;
@property (copy, nonatomic) NSString *vertexShaderLog;
@property (copy, nonatomic) NSString *fragmentShaderLog;
@property (copy, nonatomic) NSString *programLog;

- (void)deInit;
- (id)initWithVertexShaderString:(id)a0 fragmentShaderString:(id)a1 context:(id)a2;
- (void).cxx_destruct;
- (void)validate;
- (void)addAttribute:(id)a0;
- (BOOL)link;
- (void)dealloc;
- (void)use;
- (BOOL)compileShader:(unsigned int *)a0 type:(unsigned int)a1 string:(id)a2;
- (unsigned int)attributeIndex:(id)a0;
- (unsigned int)uniformIndex:(id)a0;
- (int)getProgram;

@end
