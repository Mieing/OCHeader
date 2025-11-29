@class NSString, IESLiveGuideCameraProcessor, IESLiveFaceEffectAlertView;

@interface IESLiveEffectBizServiceImpl : IESLiveGeneralBaseService <IESLiveEffectMessageSubscriber, HTSLiveMessageSubscriber, IESLiveEffectBizService>

@property (retain, nonatomic) IESLiveGuideCameraProcessor *guideGestureControl;
@property (retain, nonatomic) IESLiveFaceEffectAlertView *faceAlertView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)sendMessageToEffect:(id)a0;
- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)serviceUninstall;
- (void)didReceiveEffectMessage:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void)showFaceAlertViewIfNeed;
- (void)hideFaceAlertView;
- (void)reloadFaceEffect:(id)a0 scene:(long long)a1;
- (void)registerForConflictHandler:(id)a0 scene:(long long)a1;
- (void)switchFaceEffectRenderModel:(id)a0 config:(int)a1 scene:(long long)a2;
- (void)addFaceDetectHandler:(id /* block */)a0;
- (void)removeFaceDetectHandler;
- (void)updateSpeechRecognition:(id)a0;
- (void)applyFaceEffect:(id)a0 item:(id)a1 scene:(long long)a2 config:(id)a3 extra:(id)a4;
- (void)removeFaceEffect:(id)a0 item:(id)a1 scene:(long long)a2 config:(id)a3 extra:(id)a4;
- (void)addFaceDetectHandlerIfNeeded:(id)a0;
- (void)reportAnchorSelectEffect:(id)a0;
- (BOOL)canShowFaceAlertView;
- (BOOL)isInGuidePage;
- (void)cleanGuideResource;
- (void)addMessageSubscribe;
- (void)doRenderMainProcess:(id)a0 item:(id)a1 extra:(id)a2 scene:(long long)a3;
- (void)doRemoveMainProcess:(id)a0 item:(id)a1 extra:(id)a2;
- (void)updateGestureEnable:(id)a0;
- (void)setupGuideGestureControlIfNeed;
- (void)handleEffectDownloadMessage:(id)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2;
- (void)downloadAndSaveWithURLS:(id)a0 completion:(id /* block */)a1;
- (void)downloadSingleURL:(id)a0 completion:(id /* block */)a1;
- (id)filePathWithURL:(id)a0;
- (void).cxx_destruct;
- (id)currentEffect;
- (void)setup;
- (void)setupView;
- (void)messageReceived:(id)a0;

@end
