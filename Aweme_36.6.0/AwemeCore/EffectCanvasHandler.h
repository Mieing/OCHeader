@class HTSGLContext;

@interface EffectCanvasHandler : NSObject

@property (nonatomic) void *handler;
@property (nonatomic) void *engine;
@property (retain, nonatomic) HTSGLContext *context;

- (void)checkEffectError:(int)a0 msg:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEngine:(void *)a0;

@end
