@class UIColor, UIImageView, UIImage, UILabel, UIView, MASConstraint;

@interface AWESearchFilterButton : UIControl

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) double space;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) MASConstraint *spaceConstrint;

- (void)configUI;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadStyle;

@end
