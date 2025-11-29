@class NSString, AWEProfileLynxConfiguration, AWEProfileLynxViewController;

@interface AWEEntertainmentShowTabHomeComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) AWEProfileLynxViewController *lynxViewController;
@property (retain, nonatomic) AWEProfileLynxConfiguration *lynxConfig;
@property (nonatomic) BOOL isTabScrolled;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) BOOL hasPrefetched;
@property (nonatomic) BOOL hasThemeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (BOOL)enableFontScale;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (void)trackTabShow;
- (void)trackTabClick;
- (id)entertainmentShowTabModel;
- (unsigned long long)lynxVCAppearStyle;
- (id)tabEnterMethod;
- (void)trackTabEvent:(id)a0;
- (void)updateBgColorWithUser:(id)a0;
- (void)onDidSyncAwemeUser:(id)a0 error:(id)a1;
- (void)onFinishLogin:(id)a0;
- (void)viewDidAppear;
- (id)visibleHeight;
- (void).cxx_destruct;
- (id)user;

@end
