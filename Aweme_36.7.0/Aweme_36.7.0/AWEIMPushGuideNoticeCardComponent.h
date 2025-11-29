@interface AWEIMPushGuideNoticeCardComponent : AWEIMFlexComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (id)p_iconImageWithURL:(id)a0;
- (void)p_adaptNoticeBackground;
- (id)conversation;
- (id)displayMessage;

@end
