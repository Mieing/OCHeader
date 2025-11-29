@class BSTimelineFlutterPlugin, ECSTimelineReportLogic, BRSFinderLiveTexturePlugin, BSTLExptConfig, CMessageWrap, NSString;

@interface BSTimelineFlutterViewController : MMFlutterViewController <BSTimelineMsgMgrExt, BSDebugEventExt>

@property (retain, nonatomic) BSTimelineFlutterPlugin *apiImpl;
@property (retain, nonatomic) BRSFinderLiveTexturePlugin *finderLiveTexturePlugin;
@property (retain, nonatomic) ECSTimelineReportLogic *reportLogic;
@property (nonatomic) BOOL hasViewWillBePushedOnce;
@property (nonatomic) BOOL didAppear;
@property (nonatomic) BOOL canShowPersonalCenter;
@property (nonatomic) BOOL enableAd;
@property (nonatomic) BOOL enableBrandService;
@property (retain, nonatomic) BSTLExptConfig *exptConfig;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long enterRowIndexInMainFrameSession;
@property (nonatomic) BOOL isShowRedDotInMainFrameSession;
@property (nonatomic) unsigned int redDotCount;
@property (retain, nonatomic) CMessageWrap *enterMsgInMainFrameSession;
@property (nonatomic) unsigned int enterSessionInfoNotifyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExptConfig:(id)a0;
- (void)dealloc;
- (void)registerPlugin;
- (void)loadView;
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
- (void)onTimelinePageActiveChange:(BOOL)a0;
- (void)onNotificationUnreadCountChange;
- (void)onDelBrandTimelineMsgBySession:(id)a0;
- (void)_updateCreationCenterInfo;
- (void)setupMagicBrushEnv:(BOOL)a0;
- (void)insertMockCanvasModelToRecAtIndex:(long long)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void).cxx_destruct;

@end
