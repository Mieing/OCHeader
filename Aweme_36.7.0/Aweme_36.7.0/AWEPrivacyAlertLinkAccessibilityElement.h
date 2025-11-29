@class UIAccessibilityElement;
@protocol AWEPrivacyAlertLinkAccessibilityElementDelegate;

@interface AWEPrivacyAlertLinkAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id<AWEPrivacyAlertLinkAccessibilityElementDelegate> delegate;
@property (retain, nonatomic) UIAccessibilityElement *element;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;

@end
