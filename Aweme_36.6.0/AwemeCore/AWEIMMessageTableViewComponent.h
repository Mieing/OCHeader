@class AWEIMComponentManager, NSString, AWEIMCombineMessageListViewController;
@protocol IESIMScrollViewContentOffsetService, IESIMMessageListViewControllerProtocol, IESIMMessageListUITaskService;

@interface AWEIMMessageTableViewComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageTableViewInterface, IESIMCombineListAction, IESIMScrollViewContentOffsetAction, IESIMMessageListLifeCycleAction>

@property (weak, nonatomic) id<IESIMMessageListViewControllerProtocol> listVC;
@property (weak, nonatomic) AWEIMCombineMessageListViewController *combineListVC;
@property (weak, nonatomic) id<IESIMMessageListUITaskService> messageListUITaskService;
@property (weak, nonatomic) id<IESIMScrollViewContentOffsetService> scrollViewContentOffsetService;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)messageListViewController;
- (BOOL)isInvalidMessageCell:(id)a0;
- (void)highLightMessageCells:(id)a0;
- (id)visibleCellModels;
- (id)myLatestCellModel;
- (void)reloadTableViewWithoutTask;
- (void)reloadTableViewAndUpdateContentOffset;
- (id)listViewModel;
- (id)combineMessageListViewController;
- (void)msgList_rebuildUI;
- (void)showQuotedCombineShareMessageDetail:(id)a0;
- (void)scrollAnimationDidEnd;
- (void)highLightAirborneMessageCells:(id)a0;
- (id)cellModels;
- (id)visibleCells;
- (void).cxx_destruct;
- (id)tableView;
- (void)reloadTableView;

@end
