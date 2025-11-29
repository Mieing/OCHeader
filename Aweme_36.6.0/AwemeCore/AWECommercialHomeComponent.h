@class NSString, AWEFeature;
@protocol AWEEnterpriseProfileTabProtocol;

@interface AWECommercialHomeComponent : AWEUserHomeBaseComponent <AWEUIOrchestrationHomeComponentEvent, AWEProfileTabListProviderProtocol, AWECommercialHomeComponentProtocol>

@property (retain, nonatomic) AWEFeature<AWEEnterpriseProfileTabProtocol> *companyHomepageVCFeature;
@property (retain, nonatomic) AWEFeature<AWEEnterpriseProfileTabProtocol> *aggregationVCFeature;
@property (nonatomic) BOOL hasTrackEnterEnterpriseHomepage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (long long)currentSelectedIndex;
- (id)tabListViewController;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)commonEnterpriseTrackDict;
- (void)p_reloadEnterpriseTheme;
- (void)handleBridgeBroadcast:(id)a0;
- (id)padService;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (void)onResetUI;
- (BOOL)ifGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)uiOrchestrationDidRefresh:(id)a0;
- (void)trackEnterEnterpriseHomepageIfNeeded;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;
- (void)viewDidLoad;
- (void)onInit;

@end
