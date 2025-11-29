@interface AWEIMChatCellDoubleAvatarComponent : AWEIMChatCellComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)p_onThemeReload;
- (id)p_cellBGColor;

@end
