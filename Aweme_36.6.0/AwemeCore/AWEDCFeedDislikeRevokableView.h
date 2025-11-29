@class UIVisualEffectView, UIView, UILabel, UIButton;

@interface AWEDCFeedDislikeRevokableView : UIView

@property (retain, nonatomic) UIVisualEffectView *maskingView;
@property (retain, nonatomic) UIView *feedbackContainerView;
@property (retain, nonatomic) UIButton *revokeButton;
@property (retain, nonatomic) UILabel *feedbackTitleLabel;
@property (retain, nonatomic) UILabel *feedbackDescLabel;

- (void)p_addGesture;
- (void)showFeedbackMask;
- (void)blockTap;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
