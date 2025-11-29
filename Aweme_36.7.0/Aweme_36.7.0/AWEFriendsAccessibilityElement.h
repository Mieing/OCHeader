@interface AWEFriendsAccessibilityElement : UIAccessibilityElement

@property (copy, nonatomic) id /* block */ accessibilityIncrementBlock;
@property (copy, nonatomic) id /* block */ accessibilityDecrementBlock;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;

@end
