@class AWEProfilePreloadPost, NSString, UICollectionView, AWEPostWorkViewController, NSMutableArray, AWEPostWorkViewControllerV2;

@interface AWEPostworkHomeComponent : AWEUserHomeBaseComponent <AWEUserMessage, AWEPublishTaskMessage, AWEProfileTabListProviderProtocol, AWEPostworkHomeComponentProtocol>

@property (retain, nonatomic) AWEPostWorkViewController *postVC;
@property (retain, nonatomic) AWEPostWorkViewControllerV2 *postVCV2;
@property (nonatomic) BOOL isViewDidAppear;
@property (retain, nonatomic) NSMutableArray *localPosts;
@property (nonatomic) BOOL postWorkDirty;
@property (retain, nonatomic) AWEProfilePreloadPost *postPreloader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UICollectionView *collectionView;

- (id)referString;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (BOOL)isPostworkTabUsingWaterfallLayout;
- (void)didChangeVideoPrivacy:(id)a0;
- (void)didDeleteAweme:(id)a0;
- (void)didStoryAwemeExchange:(id)a0;
- (void)onAWEUIThemeChangeNotification;
- (BOOL)isThemeStyleLight;
- (void)didPostAweme:(id)a0;
- (void)updatePostWorkTabIcon;
- (void)refreshPostWorkDataWithWillSwitchToHomePageTab;
- (void)setBackgroundColorWith:(id)a0;
- (void)refreshPostWorkNeedDelay:(BOOL)a0;
- (BOOL)isPostworkTabHasVideo;
- (void)p_refreshPostWork;
- (void)onEnterHomePageTab;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (void)onLeaveHomePageTab;
- (id)customExtAccessibilityText;
- (void)refreshPostWorkAfterNextAppear:(id)a0;
- (id)postWorkTabModel;
- (void)p_deleteQuickShareAweme:(id)a0;
- (void)p_deletePostAweme:(id)a0;
- (BOOL)profilePostWorkUserWorkOpt;
- (void)preloadPostNetIfNeed;
- (void)didCreateAwemeDraft:(id)a0;
- (void)didDeleteAwemeDraft:(id)a0;
- (void)didClearAwemeDraft:(id)a0;
- (void)p_ttlStoryCountChangedNotification:(id)a0;
- (void)_refreshPostWorkNeedDelay:(BOOL)a0 completion:(id /* block */)a1;
- (void)p_addLocalPost:(id)a0;
- (void)_refreshPostWorkNeedDelay:(BOOL)a0;
- (void)p_removeLocalPost:(id)a0;
- (void)p_removeLocalPostWithQuickShareAweme:(id)a0;
- (void)p_scrollToTopIfCurrentVCIs:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)isViewLoaded;
- (void)onInit;

@end
