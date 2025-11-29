@class HTSLiveToolbarItem, NSString, IESLiveGCDTimer;
@protocol IESLivePerfSampler, IESLiveRealStreamingProvider;

@interface HTSLiveCameraFragment : IESLiveRoomComponent <IESLiveAnchorCameraRouter, IESLiveVRSwitchRouter>

@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL enableMirror;
@property (nonatomic) BOOL enableTorch;
@property (nonatomic) BOOL mirrored;
@property (nonatomic) BOOL isLinking;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL isDirtyCameraChecking;
@property (retain, nonatomic) IESLiveGCDTimer *dirtyCameraCheckTimer;
@property (nonatomic) BOOL resumeVRLiveMode;
@property (retain, nonatomic) HTSLiveToolbarItem *vrLiveSwitchItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentDestroy;
- (void)mountDidFinishForLevel:(long long)a0;
- (BOOL)isEnableMirror;
- (BOOL)isCameraMirrored;
- (void)toggleCameraMirror;
- (void)linkForceSwitchVRMode;
- (void)linkResumeVRMode;
- (void)loadToolbarItem;
- (void)setupDirtyCameraCheckTimerIfNeed;
- (void)mirrorButtonClicked;
- (void)onReverseItemTapped;
- (void)loadVRLiveSwitchItem;
- (void)switchCameraConfigWithVRLiveMode:(unsigned long long)a0;
- (void)trackVRCameraSwitchItemClickType:(id)a0;
- (BOOL)toggleMirrored;
- (void)toggleReversed;
- (void)checkDirtyCamera;
- (void)executeAccessibilityPostIfNeeded;
- (void).cxx_destruct;
- (void)trackEventWithName:(id)a0;

@end
