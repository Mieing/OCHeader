@class IESLiveRequestAnimationButton, PreviewStreamInfo, NSString, IESLiveGuideStartLiveViewModel, UIView;
@protocol IESLiveMonitor, IESLiveCustomConfig, IESLiveURLSchemaHandler, IESLiveLocationService, IESLiveInternalRouter;

@interface IESLiveGuideStartLiveFragment : IESLiveGuideComponent <IESLiveStartLiveRouter, IESLiveCDNSpeedTestRouter>

@property (retain, nonatomic) IESLiveGuideStartLiveViewModel *viewModel;
@property (retain, nonatomic) IESLiveRequestAnimationButton *startButton;
@property (retain, nonatomic) id<IESLiveInternalRouter> router;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) PreviewStreamInfo *previewStreamInfo;
@property (nonatomic) unsigned long long cdnPreScheduleLiveType;
@property (nonatomic) long long CDNSpeedTestResult;
@property (nonatomic) long long totalTestCount;
@property (retain, nonatomic) id<IESLiveLocationService> locationService;
@property (retain, nonatomic) UIView *blankView;
@property (readonly, nonatomic) BOOL isRequesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)mountDidFinishForLevel:(long long)a0;
- (void)bindAction;
- (void)startLive;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)setStreamInfo:(id)a0;
- (void)startLive:(long long)a0 completion:(id /* block */)a1;
- (void)handleBlockStatus:(BOOL)a0;
- (void)setSpeedTestResult:(long long)a0;
- (long long)speedTestResult;
- (id)cdnSpeedTestPreScheduleKeyFor:(unsigned long long)a0;
- (unsigned long long)preScheduleLiveType;
- (void)setPreScheduleLiveType:(unsigned long long)a0;
- (long long)totalSpeedTestCount;
- (void)setTotalSpeedTestCount:(long long)a0;
- (void)handleFinishLiveRegister;
- (void)locationReport;
- (void)handleSourceParams;
- (id)pr_createStartButton;
- (void)showAnchorProtocolAlertView;
- (id)getLiveType;
- (void)handleStartLive:(long long)a0;
- (void)trackLoadingWithRoom:(id)a0;
- (void)handleUploadBandwidthProberConflict;
- (void).cxx_destruct;
- (void)setupUI;

@end
