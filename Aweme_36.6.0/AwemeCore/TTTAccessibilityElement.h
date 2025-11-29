@class UIView;

@interface TTTAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) UIView *superview;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;

@end
