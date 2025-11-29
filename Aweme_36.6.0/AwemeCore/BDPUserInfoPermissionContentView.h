@class UIImageView, UILabel, UIView, NSLayoutConstraint;

@interface BDPUserInfoPermissionContentView : UIView {
    NSLayoutConstraint *_topContentContainerAnchor;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIImageView *userIconView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)setupSubTitleLabel;
- (void)updateConstraintsSubtitle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;
- (void)setupTitleLabel;

@end
