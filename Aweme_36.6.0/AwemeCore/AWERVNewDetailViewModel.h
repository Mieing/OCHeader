@class AWERVNewDetailViewController, AWEAwemeModel, AWERVNewDetailPageContext, AWERVNewDetailNormalCardSectionViewModel, NSString, UIViewController, AWERVNewDetailDataController, AWERVNewDetailHeadCardSectionViewModel;
@protocol AWEAwemePlayInteractionInteractorProtocol, AWECommentListViewControllerProtocol;

@interface AWERVNewDetailViewModel : AWEBaseListViewModel <AWEAwemeDetailTableViewControllerDelegate, AWEUserMessage>

@property (retain, nonatomic) AWERVNewDetailPageContext *context;
@property (retain, nonatomic) AWERVNewDetailHeadCardSectionViewModel *headCardSectionViewModel;
@property (retain, nonatomic) AWERVNewDetailNormalCardSectionViewModel *normalCardSectionViewModel;
@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (nonatomic) BOOL shouldUpdateInteractiveInfo;
@property (retain, nonatomic) AWEAwemeModel *currentPlayModel;
@property (retain, nonatomic) AWERVNewDetailDataController *dataController;
@property (weak, nonatomic) AWERVNewDetailViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)onAwemeDiggNotification:(id)a0;
- (void)followButtonAction;
- (void)onAwemeFavoriteNotification:(id)a0;
- (void)startPrefetchVideo:(id)a0 tag:(id)a1 customHeaderDic:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)commentDeleteNotification:(id)a0;
- (void)commentTotalCountNotification:(id)a0;
- (void)showCommentPanel;
- (BOOL)transferToUserProfile;
- (id)preloadSettings;
- (void)cancelPrefetchVideo;
- (id)prefetchVideoModels:(id)a0 key:(id)a1;
- (void)handleResponse:(id)a0 isLoadMore:(BOOL)a1 error:(id)a2;
- (id)userProfileViewController:(id)a0;
- (id)preloadCutomHeader:(id)a0;
- (void)tryPrefetchVideo:(id)a0;
- (id)detailContextForDetailTableVC;
- (BOOL)tryTransferToXiguaApp;
- (void)shareWithSceneType:(long long)a0;
- (void)digWithSceneType:(long long)a0;
- (void)collectionWithSceneType:(long long)a0;
- (id)modelForIndex:(long long)a0;
- (void)handlePreloadData:(id)a0;
- (void)transferToInnerFlow:(id)a0;
- (void)tryPrefetchCover:(id)a0;
- (void)syncInnerFlowModelsWithResponse:(id)a0 error:(id)a1;
- (void)commentAddNotification:(id)a0;
- (id)handleAwemeList:(id)a0;
- (void)buildSectionViewModelWithAwemeModels:(id)a0;
- (void)updateDataControllerDataSourceWithFilterArray:(id)a0;
- (void)startPrefetchVideo:(id)a0;
- (void)startPrefetchCover:(id)a0;
- (void)executeUnfollow;
- (void)executeFollow;
- (id)getRelationContext;
- (void)updateInteractiveInfoWithItemID:(id)a0 isUserID:(BOOL)a1;
- (id)getInflowExtra;
- (id)model;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (void)setupWithContext:(id)a0;

@end
