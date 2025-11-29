@class _TtC6WeChat15MagicRewardView;

@interface MMLiveMagicRewardResMemoryMonitorTask : MMLiveMagicRewardMemoryMonitorTask <WeChat.IMRViewResListener, WeChat.IMRViewListener>

@property (weak, nonatomic) _TtC6WeChat15MagicRewardView *magicRewardView;
@property (nonatomic) BOOL isResMemoryLoaded;
@property (nonatomic) BOOL isUnLoading;
@property (nonatomic) BOOL enableAutoUnload;
@property (copy, nonatomic) id /* block */ onResMemoryLoadedCallback;
@property (copy, nonatomic) id /* block */ onResMemoryUnLoadedCallback;

- (id)initWithRewardView:(id)a0 enableAutoUnLoad:(BOOL)a1;
- (void)configListeners;
- (void)checkMemory;
- (void)cancel;
- (void)tryUnLoadMemory:(id /* block */)a0;
- (void)onResLoadedWithView:(id)a0;
- (void)onResUnloadedWithView:(id)a0;
- (void)onAnimationStartWithView:(id)a0;
- (void)onAnimationCancelWithView:(id)a0;
- (void)onAnimationEndWithView:(id)a0;
- (void)onAnimationRepeatWithView:(id)a0;
- (void)onAnimationTimeoutWithView:(id)a0;
- (void)restartMonitorIfNeedAfterMemoryUsed:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
