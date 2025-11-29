@class AWEProfileLynxConfiguration, AWEProfileLynxViewController, NSString, AWEEntertainmentTabPublicAlertManager, AWEEntertainmentTabAlertEvent;

@interface AWEEntertainmentTabHomeComponent : AWEUserHomeBaseComponent <AWEEntertainmentTabPublicAlertManagerDelegate, AWEProfileTabListProviderProtocol>

@property (retain, nonatomic) AWEProfileLynxConfiguration *lynxConfig;
@property (retain, nonatomic) AWEProfileLynxViewController *lynxViewController;
@property (retain, nonatomic) AWEEntertainmentTabPublicAlertManager *entertainmentTabPublicAlertManager;
@property (retain, nonatomic) AWEEntertainmentTabAlertEvent *entertainmentTabAlertEvent;
@property (nonatomic) BOOL isTabScrolled;
@property (nonatomic) BOOL isViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableFontScale;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)supportTabTypes;
- (id)tabViewControllerForType:(long long)a0;
- (void)onResetUI;
- (void)trackTabShow;
- (void)trackTabClick;
- (unsigned long long)lynxVCAppearStyle;
- (void)viewDidAppear;
- (id)visibleHeight;
- (void).cxx_destruct;
- (void)onInit;

@end
