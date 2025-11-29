@class NLEMediaRemoteCloud_OC, NSString, UIView;
@protocol ACCLoadingViewProtocol, ACCEditStickerServiceImplProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCEditServiceProtocol;

@interface ACCEditorShareToStoryComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCVideoEditFlowControlSubscriber, NLEModelExporterDelegate>

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (nonatomic) BOOL hasKVOController;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) unsigned long long bufferingCount;
@property (nonatomic) BOOL pageWillDisappeared;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) UIView *loadingViewContainer;
@property (weak, nonatomic) id<ACCEditStickerServiceImplProtocol> stickerServiceImpl;
@property (retain, nonatomic) NLEMediaRemoteCloud_OC *cloudExporter;
@property (nonatomic) BOOL cloudExporterReleased;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recoverBlocksForPublishModel:(id)a0;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)willExitEditModeWithService:(id)a0;
- (void)firstRenderWithEditService:(id)a0;
- (void)dismissLoading;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)bindServices:(id)a0;
- (void)handleShareToStoryEffectMessageNotification:(id)a0;
- (void)handleNeedExpressStickerNotification:(id)a0;
- (void)addCloudCompileObserver;
- (void)observeDownloaderIfNeeded;
- (void)resetStreamEditStatus;
- (double)minimumPlayBufferedTimeWithCount:(unsigned long long)a0;
- (double)minimumPauseBufferedTime;
- (double)leftPlayerTime;
- (void)startCloudCompileWithAuthInfo:(id)a0;
- (void)onCompileDone:(id)a0;
- (void)onCompileError:(int)a0 ext:(int)a1 f:(float)a2 msg:(id)a3;
- (void)onVeError:(int)a0 ext:(int)a1 f:(float)a2 msg:(id)a3;
- (void)onCompileProgress:(float)a0;
- (void)onCompileStart:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObserver;
- (void)dealloc;
- (void)showLoading;

@end
