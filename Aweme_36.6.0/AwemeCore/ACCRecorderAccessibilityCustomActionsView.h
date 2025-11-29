@interface ACCRecorderAccessibilityCustomActionsView : ACCPassThroughView

- (id)generateAccessibilityCustomActions;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityCustomActions;
- (id)accessibilityValue;

@end
