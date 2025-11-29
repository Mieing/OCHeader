@interface AWEIMFoldMessageHelpQuoteReplyComponent : AWEIMFoldMessageHelpComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)p_createPresenterIfNeed;
- (void)p_tapAction;
- (void)p_prepareProps;
- (id)displayMessage;

@end
