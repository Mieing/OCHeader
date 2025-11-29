@class DDanmakuMetalConsumer, UIView, DDanmakuItemDescriptor, NSString, CALayer, NSMutableArray, DDanmakuDrawBufferPool, DDanmakuMetalProducer;
@protocol DDanmakuRenderDelegate, DDanmakuContainerViewProtocol;

@interface DDanmakuSkityRender : NSObject <DDanmakuRenderEngineProtocol>

@property (weak, nonatomic) id<DDanmakuRenderDelegate> renderEngineDelegate;
@property (retain, nonatomic) DDanmakuMetalConsumer *metalConsumer;
@property (retain, nonatomic) DDanmakuMetalProducer *danmakuMetalProducer;
@property (retain, nonatomic) DDanmakuDrawBufferPool *drawBufferPool;
@property (retain, nonatomic) UIView<DDanmakuContainerViewProtocol> *danmakuContainerView;
@property (retain, nonatomic) CALayer *metalLayer;
@property (nonatomic) BOOL finishFrameSet;
@property (retain, nonatomic) NSMutableArray *displayingDanmakus;
@property (retain, nonatomic) DDanmakuItemDescriptor *preSelectedDanmaku;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)danmakuSyncSemaphore;

- (void)clearAllDisplayingDanmakus;
- (void)refreshRenderDisplayedDanmakusWithForce:(BOOL)a0;
- (void)configWithDelegate:(id)a0;
- (long long)danmakuRenderType;
- (void)didAddDanmaku:(id)a0 inContainerView:(id)a1;
- (void)didRemoveDanmaku:(id)a0 inContainerView:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)configContainerView;
- (void)handleGestureRecognizer:(id)a0;

@end
