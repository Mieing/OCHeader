@class UIStackView, UIImageView, AWEGradientView, UILabel;

@interface AWENearbyRelationView : UIView

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) AWEGradientView *titleGradientView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIStackView *topStackView;
@property (retain, nonatomic) UIStackView *bottomStackView;

- (void)awe_themeReload;
- (void)__setupUI;
- (void)__updateColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
