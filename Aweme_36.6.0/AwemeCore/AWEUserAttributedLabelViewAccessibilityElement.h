@class UIView;
@protocol AWEUserAttributedLabelViewAccessibilityElementDelegate;

@interface AWEUserAttributedLabelViewAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id<AWEUserAttributedLabelViewAccessibilityElementDelegate> delegate;
@property (weak, nonatomic) UIView *view;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;

@end
