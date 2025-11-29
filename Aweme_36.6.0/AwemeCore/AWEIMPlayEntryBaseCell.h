@class UIStackView, AWEIMCircleProgressView, YYLabel, UIView, BDImageView;

@interface AWEIMPlayEntryBaseCell : UICollectionViewCell

@property (retain, nonatomic) AWEIMCircleProgressView *progressView;
@property (retain, nonatomic) BDImageView *iconView;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *subtitleLabel;
@property (retain, nonatomic) UIView *redDot;

- (void)p_makeConstraints;
- (void)p_updateAccessibilityIfNeeded;
- (void)p_customizeUI;
- (void)p_createViews;
- (void)configWithViewModel:(id)a0;
- (void)p_setupUI;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
