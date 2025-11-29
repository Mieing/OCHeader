@class UIVisualEffectView, IESIMButton, UILabel, UIView;

@interface AWEIMReferralTrafficTipsView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) IESIMButton *closeBtn;
@property (retain, nonatomic) IESIMButton *reportBtn;
@property (retain, nonatomic) UILabel *tipLabel;

- (void)refreshBackgroundColorWhileHasBackground:(BOOL)a0;
- (void)p_addSubViews;
- (void)didFetchMessage:(id)a0;
- (void)themeUpdated;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
