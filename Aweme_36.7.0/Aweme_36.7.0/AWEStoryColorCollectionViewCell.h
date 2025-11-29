@class AWEStoryColor, NSDictionary, UIView;

@interface AWEStoryColorCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *backColorView;
@property (retain, nonatomic) UIView *colorView;
@property (copy, nonatomic) id /* block */ didClickColorView;
@property (retain, nonatomic) AWEStoryColor *color;
@property (copy, nonatomic) NSDictionary *colorNameDict;

- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
