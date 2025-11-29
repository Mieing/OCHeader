@class NSString, AWEProfileLynxConfiguration, AWEProfileLynxViewController;

@interface AWELongVideoTabDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) AWEProfileLynxViewController *longVideoLynxVC;
@property (retain, nonatomic) AWEProfileLynxConfiguration *longVideoLynxConfig;
@property (nonatomic) BOOL isTabScrolled;
@property (nonatomic) BOOL isViewDidAppeared;
@property (nonatomic) BOOL hasPrefetched;
@property (nonatomic) BOOL hasThemeColor;
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
- (unsigned long long)lynxVCAppearStyle;
- (id)tabEnterMethod;
- (id)longVideoTabModel;
- (void)viewDidAppear;
- (id)visibleHeight;
- (void).cxx_destruct;
- (id)user;

@end
