@class CMessageWrap, NSString, BrandTimelineReportLogic, BTLFinderLiveTexturePlugin, FlutterBrandTLApiImplementation, MusicCallbackApi, BrandTLExptConfig;

@interface BrandTLFlutterViewController : MMFlutterViewController <IMusicPlayerExt, BrandTimelineMsgMgrExt, BrandDebugEventExt, BrandTLViewControllerProtocol>

@property (retain, nonatomic) FlutterBrandTLApiImplementation *apiImpl;
@property (retain, nonatomic) BTLFinderLiveTexturePlugin *finderLiveTexturePlugin;
@property (retain, nonatomic) BrandTimelineReportLogic *reportLogic;
@property (nonatomic) BOOL hasViewWillBePushedOnce;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL canShowPersonalCenter;
@property (nonatomic) BOOL enableAd;
@property (nonatomic) BOOL enableBrandService;
@property (retain, nonatomic) MusicCallbackApi *flutterMusicPlayerCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) BrandTLExptConfig *exptConfig;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long enterRowIndexInMainFrameSession;
@property (nonatomic) BOOL isShowRedDotInMainFrameSession;
@property (nonatomic) unsigned int redDotCount;
@property (retain, nonatomic) CMessageWrap *enterMsgInMainFrameSession;
@property (nonatomic) unsigned int enterSessionInfoNotifyType;

- (id)initWithExptConfig:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupPlugins;
- (void)viewDidLoad;
- (id)getMagicBrushFlutterPlugins;
- (void)viewWillBePushed:(BOOL)a0;
- (void)didTakeSnapshot:(id)a0;
- (void)updateEnterInfo;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)entryPoint;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (long long)flutterValueFromState:(unsigned long long)a0;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 onEvent:(int)a2 error:(id)a3;
- (void)onTimelinePageActiveChange:(BOOL)a0;
- (void)onNotificationUnreadCountChange;
- (void)onDelBrandTimelineMsgBySession:(id)a0;
- (void)_updateCreationCenterInfo;
- (void)setupMagicBrushEnv:(BOOL)a0;
- (void)reportAdBrandCardOnClick;
- (void)insertMockCanvasModelToRecAtIndex:(long long)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void).cxx_destruct;

@end
