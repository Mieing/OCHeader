@class CADisplayLink;

@interface AWEMVFPSProMotionController : AWEDCFeedBaseController

@property (readonly, nonatomic) long long promotionType;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct __CFRunLoopObserver { } *observerRef;
@property (nonatomic) BOOL inPage;

- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)exitContainerWithModel:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)setupObserver;
- (void)updateFPSPromotion:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupDisplayLink;
- (void)dealloc;
- (void)containerViewDidLoad;
- (void)displayLinkCallback;

@end
