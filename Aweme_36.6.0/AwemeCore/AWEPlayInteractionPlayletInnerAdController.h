@class UIButton, CAGradientLayer, UIView;

@interface AWEPlayInteractionPlayletInnerAdController : AWEPlayInteractionBaseController

@property (retain, nonatomic) UIView *blockAdBottomView;
@property (retain, nonatomic) CAGradientLayer *blockAdBottomViewLayer;
@property (weak, nonatomic) UIButton *adFreeEntryButton;

- (void)setUpMaskViewIfNeed;
- (BOOL)shouldShowAdFreeEntry;
- (id)adFreeEntryCommonParams;
- (void)showAdFreeEntry;
- (id)getPlayletAweme;
- (void)adFreeEntryButtonAction:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)willDisplay;

@end
