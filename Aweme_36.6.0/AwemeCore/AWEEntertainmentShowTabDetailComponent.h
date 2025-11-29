@class AWEProfileLynxConfiguration, AWEProfileLynxViewController, NSString, NSMutableArray;

@interface AWEEntertainmentShowTabDetailComponent : AWEUserDetailBaseComponent <AWEUserDetailControllerProtocol, AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) AWEProfileLynxViewController *lynxViewController;
@property (retain, nonatomic) AWEProfileLynxConfiguration *lynxConfig;
@property (retain, nonatomic) NSMutableArray *subscriberArray;
@property (nonatomic) BOOL isTabScrolled;
@property (nonatomic) BOOL hasPrefetched;
@property (nonatomic) BOOL hasThemeColor;
@property (nonatomic) BOOL hasInitAnnieXInjectData;
@property (nonatomic) BOOL hasPrefetchTabData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabHelper;
- (BOOL)enableFontScale;
- (void)unbindEvent;
- (void)onRefreshHeaderView:(id)a0 shouldRefreshTabView:(BOOL)a1;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (void)trackTabShow;
- (void)prefetchTabData;
- (void)trackTabClick;
- (id)entertainmentShowTabModel;
- (unsigned long long)lynxVCAppearStyle;
- (id)entTabDataInjCacheInfo;
- (id)tabEnterMethod;
- (id)getRequiredRequestParamsToFe;
- (void)trackTabEvent:(id)a0;
- (void)viewDidAppear;
- (id)visibleHeight;
- (void).cxx_destruct;
- (id)user;
- (id)registerEvent:(id)a0 callback:(id /* block */)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
