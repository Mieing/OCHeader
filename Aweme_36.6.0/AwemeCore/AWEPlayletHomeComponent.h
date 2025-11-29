@class AWEProfileLynxConfiguration, AWEProfileLynxViewController, NSString, UIViewController;
@protocol AWEDiscoverDPlayletUserProfileTabProtocol;

@interface AWEPlayletHomeComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) UIViewController<AWEDiscoverDPlayletUserProfileTabProtocol> *playletTabVC;
@property (retain, nonatomic) AWEProfileLynxViewController *lynxViewController;
@property (retain, nonatomic) AWEProfileLynxConfiguration *lynxConfig;
@property (nonatomic) BOOL isTabScrolled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (id)titleForType:(long long)a0;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (unsigned long long)lynxVCAppearStyle;
- (void)updatePlayletWatchedIfNeeded:(id)a0;
- (id)playletModelForType:(long long)a0;
- (id)showTrackerCommonParamsWithRouterParam:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;
- (void)viewDidLoad;

@end
