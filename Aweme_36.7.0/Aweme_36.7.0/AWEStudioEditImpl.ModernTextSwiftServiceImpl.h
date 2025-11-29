@interface AWEStudioEditImpl.ModernTextSwiftServiceImpl : NSObject <AWEModernTextSwiftProtocol>

- (id)presentModernTextEditViewControllerWithPublishModel:(id)a0 type:(unsigned long long)a1 delegate:(id)a2 placeholderText:(id)a3 customTransitionDelegate:(id)a4;
- (void)showModernTextEditViewWithInputView:(id)a0 model:(id)a1 delegate:(id)a2;
- (double)fontSizeInTextInputWithText:(id)a0;
- (id)init;

@end
