@class NSString, NSMutableArray;

@interface DUXAnimaXView : AnimaXView <DUXAnimationViewProtocol, AnimaXAnimationListener>

@property (retain, nonatomic) NSMutableArray *operationQueue;
@property (nonatomic) BOOL isReady;
@property (nonatomic) double animationProgress;
@property (nonatomic) BOOL loopAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationNamed:(id)a0 inBundle:(id)a1;
+ (void)_aweLazyRegisterStaticLoad;
+ (void)handleError:(long long)a0 message:(id)a1;

- (void)pause;
- (void)stop;
- (void)play;
- (void)onCancel:(id)a0;
- (void)onFirstFrame:(id)a0;
- (void)checkAnimationStatus;
- (void)flushOperationQueue;
- (void)onStart:(id)a0;
- (void)enqueueOperation:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)onCompletion:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)onError:(id)a0;
- (void)onReady:(id)a0;

@end
