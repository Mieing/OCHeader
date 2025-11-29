@class NSString, NSMutableDictionary, AWEProfileLynxViewController;

@interface AWETabListViewControllerDetailComponent : AWEUserDetailBaseComponent <AWEProfileTabListProviderProtocol>

@property (nonatomic) BOOL isViewDidAppear;
@property (nonatomic) BOOL isTabScrolled;
@property (retain, nonatomic) AWEProfileLynxViewController *productsViewController;
@property (retain, nonatomic) AWEProfileLynxViewController *lynxVC;
@property (retain, nonatomic) AWEProfileLynxViewController *serviceLynxVC;
@property (retain, nonatomic) NSMutableDictionary *commonLynxViewControllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (BOOL)canHandleUnsupportedTabType:(long long)a0;
- (void)onResetUI;
- (id)__getCommonLynxViewControllerForType:(long long)a0;
- (id)productsTabModel;
- (id)lifeServiceTabModel;
- (id)serviceTabModel;
- (double)__topPaddingHeight;
- (id)__createLynxViewControllerForTabType:(long long)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)user;
- (void)viewDidLoad;

@end
