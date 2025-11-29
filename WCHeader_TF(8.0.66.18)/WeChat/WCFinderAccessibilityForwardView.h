@interface WCFinderAccessibilityForwardView : UIView

@property (weak, nonatomic) id target;
@property (nonatomic) SEL labelGenerator;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
