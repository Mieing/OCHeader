@interface AWECommentPanelListSwiftImpl.CommentViewControllerComponentsManager : NSObject <AWECommentViewControllerBizLifeCycleProtocol, AWECommentViewControllerBasicLifeCycleProtocol, AWECommentViewControllerBottomBarProtocol> {
    void /* unknown type, empty encoding */ rootComponent;
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ protocolComponents;
}

- (void)commentContainerThemeDidUpdate:(BOOL)a0;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (id)setupCommentListBottomBar;
- (void).cxx_destruct;
- (id)init;

@end
