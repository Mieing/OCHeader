@interface AWEIMConversationLifeCycleCommonTaskComponent : AWEIMComponentBase

@property (nonatomic) BOOL firstFrameOpt;

- (void)hostVC_willDealloc;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)hostVC_viewDidLoad;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_afterFirstRender;
- (void)hostVC_viewWillDisappear;
- (void)p_viewDidAppear;
- (void)tasksCanDelay;

@end
