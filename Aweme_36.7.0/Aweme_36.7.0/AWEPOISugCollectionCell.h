@class UIButton;

@interface AWEPOISugCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIButton *nameButton;
@property (retain, nonatomic) UIButton *suffixButton;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
