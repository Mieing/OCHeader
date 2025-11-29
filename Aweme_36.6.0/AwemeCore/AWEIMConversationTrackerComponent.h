@interface AWEIMConversationTrackerComponent : AWEIMComponentBase

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidAppear;
- (void)hostVC_afterFirstRender;
- (void)hostVC_viewWillDisappear;
- (void)setBcmPageParams;

@end
