@class NSString, AWEProfileLynxConfiguration, AWEProfileLynxViewController;

@interface AWELongVideoTabHomeComponent : AWEUserHomeBaseComponent <AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) AWEProfileLynxViewController *longVideoLynxVC;
@property (retain, nonatomic) AWEProfileLynxConfiguration *longVideoLynxConfig;
@property (nonatomic) BOOL isTabScrolled;
@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) BOOL hasPrefetched;
@property (nonatomic) BOOL hasThemeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)onResetUI;
- (unsigned long long)lynxVCAppearStyle;
- (id)tabEnterMethod;
- (void)updateBgColorWithUser:(id)a0;
- (void)onDidSyncAwemeUser:(id)a0 error:(id)a1;
- (void)onFinishLogin:(id)a0;
- (id)longVideoTabModel;
- (double)topPaddingHeight;
- (void)viewDidAppear;
- (id)visibleHeight;
- (void).cxx_destruct;
- (id)user;

@end
