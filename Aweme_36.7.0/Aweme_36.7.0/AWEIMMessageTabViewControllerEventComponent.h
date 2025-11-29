@interface AWEIMMessageTabViewControllerEventComponent : AWEIMComponentBase

- (void)hostVC_willDealloc;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)handleEnterMessageTabEvent;
- (void)onTabBarDidChangeNotification:(id)a0;

@end
