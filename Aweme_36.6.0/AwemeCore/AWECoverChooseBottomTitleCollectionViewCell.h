@class UIImageView, UILabel, UIView;

@interface AWECoverChooseBottomTitleCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *bottomView;
@property (readonly, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) UILabel *label;

- (void)updateWithObject:(id)a0 selected:(BOOL)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_init;

@end
