@class NSString, AWEIMStrangerPrivateMsgSettingTopTipInteractor, AWEIMStrangerReadStateTopTipViewInteractor, AWEIMCommonChatListViewController, AWEIMPriorityQueueSyncDispatcher, NSDictionary, AWEIMTopNoticeTipView, AWEIMStrangerBlockMessageTopTipViewInteractor;
@protocol AWEIMCommonChatListDataSourceInterface, AWEIMStrangerChatListViewModelProtocol;

@interface AWEIMStrangerChatListViewControllerV2 : UIViewController <AWEIMStrangerCommonTopTipViewInteractorDelegate, AWEIMCommonChatListDataSourceAction, AWEIMStrangerQuickManagerDelegate>

@property (retain, nonatomic) AWEIMCommonChatListViewController *subChatListVC;
@property (retain, nonatomic) id<AWEIMCommonChatListDataSourceInterface> dataSource;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL isFullPage;
@property (weak, nonatomic) AWEIMTopNoticeTipView *topTipView;
@property (retain, nonatomic) AWEIMPriorityQueueSyncDispatcher *topTipViewDispatcher;
@property (retain, nonatomic) AWEIMStrangerReadStateTopTipViewInteractor *readStateTopTipViewInteractor;
@property (retain, nonatomic) AWEIMStrangerBlockMessageTopTipViewInteractor *blockMessageTopTipViewInteractor;
@property (retain, nonatomic) AWEIMStrangerPrivateMsgSettingTopTipInteractor *privateMsgSettingTopTipViewInteractor;
@property (retain, nonatomic) id<AWEIMStrangerChatListViewModelProtocol> viewModel;
@property (nonatomic) double time_point;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)autoDispatchFloatingViewWithPriority:(long long)a0 priorityObject:(id)a1;
- (void)setupNaviBar;
- (void)backBtnClicked:(id)a0;
- (id)emptyPage;
- (void)didFinishLoadPagedChatList;
- (void)didFinishLoadFirstPageData;
- (void)deleteChat:(id)a0 indexPath:(id)a1;
- (id)chatForIndexPath:(id)a0;
- (void)p_initSubViewController;
- (void)initSubView;
- (void)setUpTipView;
- (id)trashEmptyPage;
- (void)tryToShowBlockMessageTopTipView;
- (void)tryShowTipsView;
- (void)layoutListVC;
- (void)showOrHidePrivateSettingTipWithValue:(long long)a0;
- (void)showOrHidePrivateSettingTipIfNeed;
- (void)addTopTipView:(id)a0;
- (void)removeTopTipView:(id)a0;
- (void)showOrHidePrivateSettingTip;
- (void)showOrHidePrivateSettingTipWithSelect:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (BOOL)isTrash;

@end
