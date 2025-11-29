@class UITapGestureRecognizer, NSMutableArray, UIView;

@interface AWETeenLandscapeSpeedPlayView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *selectItems;
@property (nonatomic) BOOL isPanelShowing;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;

- (void)p_layoutViews;
- (void)p_addBlurEffect;
- (void)p_activateButtonWithPlaybackRateType:(long long)a0;
- (void)clickButton:(id)a0;
- (void)p_onScreenClicked;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (void)show;

@end
