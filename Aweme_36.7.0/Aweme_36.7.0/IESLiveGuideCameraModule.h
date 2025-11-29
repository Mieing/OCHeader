@class NSArray, NSString, IESLiveGuideContainerContext;
@protocol IESLiveRecoder, IESLiveEffectProcessLifyCycle, IESLiveVideoEffectProcessing;

@interface IESLiveGuideCameraModule : IESLiveGuideExecutionBaseModule <IESLiveGuideCameraProvider, HTSLiveCameraEffectProvider>

@property (nonatomic) BOOL isVideoEffectProcessModuleLoaded;
@property (retain, nonatomic) id<IESLiveEffectProcessLifyCycle> videoEffectLifyCycle;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcessProvider;
@property (retain, nonatomic) id<IESLiveRecoder> recorder;
@property (retain, nonatomic) IESLiveGuideContainerContext *containerContext;
@property (nonatomic) BOOL isInLiveTab;
@property (nonatomic) BOOL willCloseGuideVC;
@property (copy, nonatomic) NSArray *applicationStateObservers;
@property (nonatomic) BOOL willGotoVideoLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL openGesture;

- (void)liveDidAppear;
- (void)liveDidDisappear;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })currentOutputSize;
- (void)setUpEffectEnvironment;
- (void)resetOutputSize;
- (void)resetCameraWithoutCameraPermission:(id)a0;
- (void)subscribeExecutionMessage;
- (void)initialize:(id)a0 params:(id)a1;
- (void)_unRegisterApplicationStateNotification;
- (void)switchToOtherTab;
- (void)switchToLiveTab;
- (void)closeGuideVC:(BOOL)a0;
- (void)componentMountDidFinish;
- (void)handleCamera;
- (void)sendCameraDidSetMessage;
- (void)loadVideoEffectProcessModule;
- (void)_registerApplicationStateNotification;
- (void)videoEffectProcessModulePreLoaded;
- (BOOL)isCameraAuthorized;
- (BOOL)canRestOutputSizeWithOriginSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidDestroy:(id)a0 params:(id)a1;
- (void)viewWillAppear:(id)a0 params:(id)a1;
- (void)viewDidAppear:(id)a0 params:(id)a1;
- (void)viewWillDisappear:(id)a0 params:(id)a1;
- (void)viewDidDisappear:(id)a0 params:(id)a1;
- (id)cameraPreview;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateCamera:(id)a0;
- (void)setActive:(BOOL)a0;
- (void)setupCamera:(id)a0;

@end
