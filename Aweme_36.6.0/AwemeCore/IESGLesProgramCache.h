@class HTSGLContext, NSMutableDictionary;

@interface IESGLesProgramCache : NSObject

@property (weak, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) NSMutableDictionary *innerProgramCache;
@property (retain, nonatomic) NSMutableDictionary *customerProgramCache;

- (id)createProgram:(long long)a0;
- (id)fetchProgram:(long long)a0;
- (id)fetchProgramForVertexShaderString:(id)a0 fragmentShaderString:(id)a1 attribute:(id)a2;
- (void)flush;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
