@class UILabel, UIFont, UIView;

@interface AWETabTitleControl : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *yellowDotView;
@property (retain, nonatomic) UIView *indicatorView;
@property (nonatomic) double indicatorWidth;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIFont *unselectedFont;

+ (struct CGSize { double x0; double x1; })collectionView:(id)a0 sizeForTabTitleControlWithTitle:(id)a1 font:(id)a2;

- (void)showYellowDot:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
