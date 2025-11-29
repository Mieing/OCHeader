@class UIButton, UIStackView;

@interface AWEProfilePreviewFollowView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UIButton *messageButton;
@property (retain, nonatomic) UIButton *recommendButton;

- (BOOL)shouldShowMsgBtn;
- (BOOL)shouldShowRecommendBtn;
- (id)imageWithAlpha:(double)a0 image:(id)a1;
- (void).cxx_destruct;
- (id)userModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
