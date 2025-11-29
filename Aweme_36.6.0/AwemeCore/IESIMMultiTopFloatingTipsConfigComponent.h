@interface IESIMMultiTopFloatingTipsConfigComponent : AWEIMComponentBase <IESIMLoginManagerMessage>

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (id)init;

@end
