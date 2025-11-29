@interface AWEAccessibilityImageView : UIImageView

@property (copy, nonatomic) id /* block */ accessibilityDidBecomeFocused;
@property (copy, nonatomic) id /* block */ accessibilityDidLoseFocused;

- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;

@end
