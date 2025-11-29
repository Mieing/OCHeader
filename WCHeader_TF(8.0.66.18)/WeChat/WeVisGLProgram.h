@class NSMutableArray;

@interface WeVisGLProgram : NSObject {
    NSMutableArray *attributes;
    NSMutableArray *uniforms;
    unsigned int vertShaderId;
    unsigned int fragShaderId;
}

@property (nonatomic) unsigned int programId;
@property (nonatomic) BOOL isCompileAndLinked;

- (BOOL)compileShader:(unsigned int *)a0 type:(unsigned int)a1 source:(const char *)a2;
- (id)initWithVertShader:(const char *)a0 fragShader:(const char *)a1;
- (void)dealloc;
- (void)addAttribute:(id)a0;
- (unsigned int)attributeIndex:(id)a0;
- (unsigned int)uniformIndex:(id)a0;
- (BOOL)link;
- (void)bind;
- (BOOL)validate;
- (void).cxx_destruct;

@end
