@class DDanmakuDrawBufferPool, CAMetalLayer, SkityContext;

@interface DDanmakuMetalConsumer : NSObject

@property (retain, nonatomic) CAMetalLayer *layer;
@property (retain, nonatomic) SkityContext *skityContext;
@property (retain, nonatomic) DDanmakuDrawBufferPool *danmakuBufferPool;
@property (nonatomic) BOOL finishLayerConfig;

+ (id)danmakuSurfaceContext;
+ (id)danmakuRefreshHandleQueue;
+ (unsigned long long)numTaskInQueue;
+ (void)modifyNumTaskInQueue:(BOOL)a0;
+ (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *)danmakuQueueLock;

- (void)updateLayerContentsScale;
- (void)refreshDanmakuCanvasIfNeedInAsync;
- (void)drawDanmaku:(id)a0 canvas:(id)a1;
- (void)drawDanmukuOnCanvas:(id)a0;
- (id)initWithLayer:(id)a0 danmakuBufferPool:(id)a1;
- (void)renderDisplayedDanmakusWithForce:(BOOL)a0;
- (void)clearAllDisplayingDanmakusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
