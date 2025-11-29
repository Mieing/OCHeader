@class UILabel, UIButton;

@interface AWEShakeShareAwemeNoLocationAuthorizationView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *authButton;
@property (copy, nonatomic) id /* block */ authBlock;

- (void)initView;
- (void)authButtonTapped;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLayout;

@end
