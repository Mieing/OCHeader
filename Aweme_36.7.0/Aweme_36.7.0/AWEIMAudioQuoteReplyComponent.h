@interface AWEIMAudioQuoteReplyComponent : AWEIMAudioContentComponent

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_loadDetailMessageFrom:(id)a0;
- (id)displayMessage;

@end
