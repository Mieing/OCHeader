@protocol AWECommentTabContainerLifeCycleProtocol;

@interface AWECommentPanelTabSwiftImpl.CommentTabManager : NSObject <AWECommentTabManagerProtocol> {
    void /* unknown type, empty encoding */ allComponents;
    void /* unknown type, empty encoding */ componentMap;
    void /* unknown type, empty encoding */ currentTabContext;
    void /* function */ tabDidUpdate;
    void /* function */ tabDidShow;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ segmentedControl;
    void /* unknown type, empty encoding */ containerVC;
    void /* unknown type, empty encoding */ didFinishFirstReload;
}

@property (nonatomic, copy) id /* block */ tabDidUpdate;
@property (nonatomic, copy) id /* block */ tabDidShow;
@property (nonatomic) BOOL didLanding;
@property (nonatomic, retain) id<AWECommentTabContainerLifeCycleProtocol> msgSender;

- (id)viewControllerForType:(unsigned long long)a0;
- (BOOL)containsTab:(unsigned long long)a0;
- (void)configSegmentedControl:(id)a0;
- (void)configContainer:(id)a0;
- (void)setNeedUpdateData;
- (id)componentTypes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (long long)tabCount;

@end
