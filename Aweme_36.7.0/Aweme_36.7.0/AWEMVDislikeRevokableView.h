@class UIVisualEffectView, UILabel, UIView, UIButton;

@interface AWEMVDislikeRevokableView : UIView

@property (retain, nonatomic) UIVisualEffectView *maskingView;
@property (retain, nonatomic) UIView *feedbackContainerView;
@property (retain, nonatomic) UILabel *feedbackTitleLabel;
@property (retain, nonatomic) UILabel *feedbackLDescLabel;
@property (retain, nonatomic) UIButton *revokeButton;
@property (nonatomic) BOOL enableOffscreenOpt;

- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;
- (void)setupSubviews;

@end
