@class UIColor, UIView;

@interface BrandProfileButton : MMUIButton

@property (retain, nonatomic) UIView *animatedMaskView;
@property (retain, nonatomic) UIColor *highlightColor;

- (void)addTouchAnimations;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;

@end
