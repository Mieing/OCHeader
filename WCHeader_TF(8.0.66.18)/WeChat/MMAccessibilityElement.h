@class UIBezierPath, RichTextView;

@interface MMAccessibilityElement : UIAccessibilityElement

@property (copy, nonatomic) UIBezierPath *accessibilityPathInContainer;
@property (weak, nonatomic) RichTextView *richTextView;

- (id)accessibilityPath;
- (void).cxx_destruct;

@end
