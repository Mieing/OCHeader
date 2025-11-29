@class NSArray;

@interface AFDAccessibilityContainerView : UIView

@property (copy, nonatomic) NSArray *accessibilityLabelElements;
@property (copy, nonatomic) id /* block */ accessibilityActivateBlock;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;

@end
