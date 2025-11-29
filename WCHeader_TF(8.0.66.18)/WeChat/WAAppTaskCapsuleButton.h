@class UIImage, UIView;

@interface WAAppTaskCapsuleButton : MMUIButton

@property (retain, nonatomic) UIView *hightlightedView;
@property (nonatomic) BOOL isDisabled;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIImage *iconWhenDisabled;

+ (id)genRoundedCapsuleButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateIcon;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
