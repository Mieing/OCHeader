@interface AWEStoryKit.LifeCycleDispatchController : AWEStoryKit.StoryKitBaseController <AWEStoryKit.StoryKitViewControllerLifeCycle>

- (void)onThemeChanged;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
