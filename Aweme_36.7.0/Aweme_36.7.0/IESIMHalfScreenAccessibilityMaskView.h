@interface IESIMHalfScreenAccessibilityMaskView : UIView

@property (copy, nonatomic) id /* block */ activeMethodBlock;
@property (copy, nonatomic) id /* block */ didBecomeFocusedBlock;

- (void).cxx_destruct;
- (id)init;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)accessibilityActivate;

@end
