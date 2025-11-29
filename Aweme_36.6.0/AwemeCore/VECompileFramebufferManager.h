@class HTSGLContext, NSMutableArray, NSCondition;

@interface VECompileFramebufferManager : NSObject

@property (retain, nonatomic) NSMutableArray *framebufferPool;
@property (nonatomic) long long resourceCount;
@property (retain, nonatomic) HTSGLContext *glContext;
@property (nonatomic) struct CGSize { double width; double height; } framebufferSize;
@property (nonatomic) long long minBufferSize;
@property (nonatomic) double waitTime;
@property (retain, nonatomic) NSCondition *conditionLock;

- (void)initFramebufferPool:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)returnFramebuffer:(id)a0;
- (id)fetchFramebuffer;
- (id)initManagerWithPipelineResourceCount:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
