@interface AWEIMMessageGiphyQuickReplyComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeeded;
- (void)p_updateUIIfNeeded:(BOOL)a0;
- (void)p_trackRelpyButtonShow;
- (void)p_didTapReplyButton;

@end
