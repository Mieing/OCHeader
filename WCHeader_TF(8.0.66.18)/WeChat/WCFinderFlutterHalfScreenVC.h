@class NSString, MMFlutterViewController, WCFinderFlutterHalfScreenVCConfig, WCFinderFlutterHalfScreenPlugin;

@interface WCFinderFlutterHalfScreenVC : WCFinderCustomPanelSheet <WCFinderFlutterHalfScreenPluginDelegate>

@property (retain, nonatomic) WCFinderFlutterHalfScreenVCConfig *config;
@property (retain, nonatomic) WCFinderFlutterHalfScreenPlugin *halfScreenPlugin;
@property (retain, nonatomic) MMFlutterViewController *flutterVC;
@property (nonatomic) unsigned long long cancelMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (id)initWithConfig:(id)a0;
- (void)baseInit;
- (id)loadContentView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)panelSheetWillCloseWithAction:(unsigned long long)a0;
- (BOOL)panelDragPanGesShouldBegin:(id)a0;
- (void)setupUI;
- (id)flutterRouter;
- (id)_flutterPlugins;
- (id)extraFlutterPlugins;
- (id)_flutterParams;
- (id)extraFlutterParams;
- (void)onHalfScreenPluginCancelWithAnimated:(BOOL)a0;
- (void)onHalfScreenPluginUpdateContentHeight:(double)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
