@interface AWEIMConversationUGComponent : AWEIMComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidLoad;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (void)p_checkUGTaskFinish;
- (void)p_showUGNoticeIfNeeded;

@end
