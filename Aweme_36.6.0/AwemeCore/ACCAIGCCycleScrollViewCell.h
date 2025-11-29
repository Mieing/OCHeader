@class UIImageView, UIView;

@interface ACCAIGCCycleScrollViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *coverView;
@property (copy, nonatomic) id /* block */ didCellClick;

- (void)setupCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityElementDidBecomeFocused;
- (void)handleTapGesture:(id)a0;

@end
