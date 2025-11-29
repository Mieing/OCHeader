@protocol IESLiveAccessibilityDelegate;

@interface IESLiveAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id<IESLiveAccessibilityDelegate> delegate;

- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;

@end
