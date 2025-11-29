@class AWESearchLocationAuthGuideView, NSString;
@protocol AWESearchLifeLynxPopupProtocol;

@interface AWESearchLifeServiceLocationAuthService : AWESearchLifeServiceBaseService <AWESearchLifeServiceLocationAuthServiceProtocol>

@property (nonatomic) BOOL POITopBarIsShowing;
@property (retain, nonatomic) AWESearchLocationAuthGuideView *POITopBarView;
@property (nonatomic) BOOL isPOIPopupShowing;
@property (retain, nonatomic) id<AWESearchLifeLynxPopupProtocol> lynxPopupManager;
@property (nonatomic) BOOL isVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)customFeedRecieveRequestWithResponseParams:(id)a0 isLoadMore:(BOOL)a1;
- (id)filterService;
- (void)tryToLocateAndRefreshAfterAuth;
- (void)removePOITopBarIfNeeded;
- (double)POIAuthTopBarHeight;
- (void)removePOIAuthTopBar;
- (void)displayPOIAuthTopBar;
- (void)adjustLayoutForPOITopBarView;
- (BOOL)shouldForbidPOIAuthPopup;
- (void)removeCouponPopupViewIfNeeded;
- (void)notifyAuthStateChangeIfNeeded;
- (void)tryToLocateAndRefreshAfterAuthIfNeeded;
- (void)handlePoiAuthorizationViewWithParams:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)applicationWillEnterForeground;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
