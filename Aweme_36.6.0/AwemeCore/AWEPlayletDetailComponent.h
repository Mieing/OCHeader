@class AWEProfileLynxConfiguration, AWEProfileLynxViewController, NSString, UIViewController;
@protocol AWEDiscoverDPlayletUserProfileTabProtocol;

@interface AWEPlayletDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) UIViewController<AWEDiscoverDPlayletUserProfileTabProtocol> *playletTabVC;
@property (retain, nonatomic) AWEProfileLynxViewController *lynxViewController;
@property (retain, nonatomic) AWEProfileLynxConfiguration *lynxConfig;
@property (nonatomic) BOOL isTabScrolled;
@property (nonatomic) BOOL hasInitAnnieXInjectData;
@property (nonatomic) BOOL hasPrefetchTabData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (void)onRefreshHeaderView:(id)a0 shouldRefreshTabView:(BOOL)a1;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (void)prefetchTabData;
- (unsigned long long)lynxVCAppearStyle;
- (void)updatePlayletWatchedIfNeeded:(id)a0;
- (id)playletModelForType:(long long)a0;
- (id)titleForTabType:(long long)a0;
- (id)playletTabDataInjCacheInfo;
- (id)showTrackerCommonParamsWithRouterParam:(id)a0;
- (id)playletADParamters;
- (void).cxx_destruct;
- (id)user;
- (void)viewDidLoad;

@end
