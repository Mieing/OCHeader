@interface WCAgreementCheckBoxAccessibilityElement : UIAccessibilityElement

@property (copy, nonatomic) id /* block */ accessibilityActivateHandler;
@property (copy, nonatomic) id /* block */ accessibilityActivationPointHandler;

- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void).cxx_destruct;

@end
