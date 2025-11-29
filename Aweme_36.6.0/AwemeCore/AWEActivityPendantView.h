@class AWEPendantView, AWEPendantCapsuleView, NSString, AWEToolTipView, AWEActivityConfigModel;

@interface AWEActivityPendantView : UIView

@property (retain, nonatomic) AWEPendantView *mainPendantView;
@property (retain, nonatomic) AWEPendantCapsuleView *capsuleView;
@property (retain, nonatomic) AWEToolTipView *toastBubble;
@property (retain, nonatomic) AWEActivityConfigModel *configModel;
@property (retain, nonatomic) NSString *capsuleMessage;

- (void)configActivityViewWithModel:(id)a0;
- (void)switchPendantViewState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)registerTapHandler:(id /* block */)a0 dismissHandler:(id /* block */)a1;
- (unsigned long long)pendantViewState;
- (void)enableLottieAnimation:(BOOL)a0;
- (void)hideCapsuleView;
- (void)showCapsuleMessage:(id)a0;
- (void)showMessageOnBubble:(id)a0;
- (void)registerStatusChangeCompletion:(id /* block */)a0;
- (id)currentMessageOnCapsule;
- (id)hexColorStyle:(id)a0;
- (void)configPendantViewWithExpandedLottie:(id)a0 foldedLottie:(id)a1;
- (void)configPendantViewWithExpandedImage:(id)a0 foldedImage:(id)a1;
- (void)configCapsuleView:(id)a0;
- (void)configPendantView:(id)a0;
- (void)dismissBubbleWithCompletion:(id /* block */)a0;
- (void)playRewardAnimation;
- (void).cxx_destruct;

@end
