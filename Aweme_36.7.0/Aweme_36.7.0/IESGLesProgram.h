@class HTSGLContext, NSMutableDictionary;

@interface IESGLesProgram : NSObject

@property (weak, nonatomic) HTSGLContext *context;
@property (nonatomic) unsigned int program;
@property (nonatomic) unsigned int vShader;
@property (nonatomic) unsigned int fShader;
@property (retain, nonatomic) NSMutableDictionary *uniformDict;
@property (nonatomic) long long programType;

- (id)initWithContext:(id)a0 vertex:(id)a1 fragment:(id)a2;
- (unsigned int)compileShader:(unsigned int)a0 string:(id)a1;
- (void)bindAttribute:(id)a0;
- (int)fetchUniform:(id)a0;
- (void)unuse;
- (void).cxx_destruct;
- (BOOL)link;
- (void)dealloc;
- (void)use;

@end
