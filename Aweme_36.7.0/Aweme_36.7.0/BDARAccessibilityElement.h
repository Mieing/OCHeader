@interface BDARAccessibilityElement : UIAccessibilityElement

@property (copy, nonatomic) id /* block */ labelBlock;
@property (copy, nonatomic) id /* block */ activateActionBlock;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;

@end
