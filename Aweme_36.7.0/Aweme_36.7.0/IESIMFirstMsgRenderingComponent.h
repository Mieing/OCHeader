@class NSString;
@protocol AWEIMMessageTableViewInterface;

@interface IESIMFirstMsgRenderingComponent : AWEIMComponentBase <AWEIMMessageListDataAction, AWEIMMessageTableViewAction, IESIMMessageListLifeCycleAction, IESIMFirstMsgRenderingService>

@property (nonatomic) BOOL isFirstMsgRendering;
@property (nonatomic) BOOL emptyAtFirstLoad;
@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)beforeAsync_didFetchMsgWithMessageGroupArray:(id)a0 hasMore:(BOOL)a1 direction:(unsigned long long)a2 shouldAutoLoadMore:(BOOL)a3 isFirstLoad:(BOOL)a4;
- (void)msgList_viewDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
