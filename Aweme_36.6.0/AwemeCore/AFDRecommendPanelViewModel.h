@class AWEBaseListSectionViewModel, AFDRecommendPanelDataController, NSString, AWEAwemeModel, AFDRecommendPanelContext;
@protocol AFDRecommendPanelContentSectionViewModelProtocol, AFDRecommendPanelViewModelDelegate;

@interface AFDRecommendPanelViewModel : AWEBaseListViewModel <AFDRecommendToFriendPanelMessage>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AFDRecommendPanelContext *context;
@property (retain, nonatomic) AWEBaseListSectionViewModel<AFDRecommendPanelContentSectionViewModelProtocol> *sectionViewModel;
@property (retain, nonatomic) AFDRecommendPanelDataController *dataController;
@property (nonatomic) BOOL didFinishFirstLoaded;
@property (weak, nonatomic) id<AFDRecommendPanelViewModelDelegate> delegate;
@property (nonatomic) BOOL needRefreshData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)recommendPanelDidFilterUserWithUserID:(id)a0 awemeID:(id)a1;
- (void)refreshRecommendPanelWithAwemeID:(id)a0;
- (id)footerModel;
- (void)didClickRecommendButton;
- (void)didClickRecommendCountText;
- (void)refreshListByActionWithModel:(id)a0;
- (void)initializeWithContext:(id)a0 delegate:(id)a1;
- (void)trackEnterRecommendList;
- (void)refreshUserListWithModel:(id)a0;
- (void)recommendAwemeStatusChangeNotification:(id)a0;
- (id)titleTextWithAweme:(id)a0 recommendListCount:(long long)a1;
- (id)recommendTotalCountTextWithAweme:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)userList;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;
- (double)footerHeight;
- (void)viewDidDisappear;
- (id)headerModel;
- (void)addObservers;
- (void)viewWillDisappear;

@end
