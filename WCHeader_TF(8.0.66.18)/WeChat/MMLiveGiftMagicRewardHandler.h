@class NSString, NSMutableArray, _TtC6WeChat15MagicRewardView;

@interface MMLiveGiftMagicRewardHandler : NSObject <WeChat.IMRViewResListener, WeChat.IMRViewListener>

@property (weak, nonatomic) _TtC6WeChat15MagicRewardView *rewardView;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSMutableArray *liveGiftMRViewListenerList;

- (id)initWithMagicRewardView:(id)a0;
- (void)addMRListeners;
- (void)updateProductId:(id)a0;
- (id)currentProductId;
- (id)getMagicRewardView;
- (void)addLiveGiftMRListener:(id)a0;
- (void)removeLiveGiftMRListener:(id)a0;
- (void)preparePlay:(id)a0;
- (void)prepareEdit:(id)a0;
- (void)onPlayCancelWithView:(id)a0;
- (void)onResLoadedWithView:(id)a0;
- (void)onResUnloadedWithView:(id)a0;
- (void)onAnimationStartWithView:(id)a0;
- (void)onAnimationCancelWithView:(id)a0;
- (void)onAnimationEndWithView:(id)a0;
- (void)onAnimationRepeatWithView:(id)a0;
- (void)onAnimationTimeoutWithView:(id)a0;
- (void).cxx_destruct;

@end
