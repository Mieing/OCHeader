@interface AWEIMMessageLightInteractionReplyComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeeded;
- (id)emojiImageNameWithKey:(id)a0;
- (void)p_trackRelpyButtonShow;
- (void)p_didTapReplyButton;
- (id)p_defaultBackgroundColor;
- (void)p_updateUIIfNeeded:(BOOL)a0 service:(id)a1;

@end
