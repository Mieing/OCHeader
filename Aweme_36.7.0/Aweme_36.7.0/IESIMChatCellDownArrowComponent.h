@interface IESIMChatCellDownArrowComponent : AWEIMChatCellComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (id)presenterForSnapshot;
- (void)p_onThemeReload;
- (id)p_cellBGColor;

@end
