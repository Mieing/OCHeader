@class NSString, UILabel, NSLayoutConstraint;

@interface AWEMateOnboardingNavigationBarTitleView : UIView

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSLayoutConstraint *emptySubtitleHeightConstraint;

- (void)initView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subtitle:(id)a2;
- (void)updateViewWithTitle:(id)a0 subtitle:(id)a1;
- (void).cxx_destruct;
- (void)setupLayout;

@end
