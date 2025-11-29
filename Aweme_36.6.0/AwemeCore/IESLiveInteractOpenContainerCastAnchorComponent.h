@class NSString, IESLivePrivacyPolicyToken, IESLiveInteractOpenContainerCastInfo, IESLiveInteractOpenContainerCastAnchorStore;

@interface IESLiveInteractOpenContainerCastAnchorComponent : IESLiveInteractComponentBase <IESLiveInteractOpenContainerCastAnchorRouter, IESLiveAnchorCameraPermissionHandler, IESLiveAnchorPrivacyPermissionProtocol, IESLivePrivacyContextProvider>

@property (retain, nonatomic) IESLiveInteractOpenContainerCastAnchorStore *store;
@property (retain, nonatomic) IESLivePrivacyPolicyToken *privacyToken;
@property (readonly, nonatomic) BOOL isProcessing;
@property (readonly, copy, nonatomic) NSString *openContainerAppID;
@property (readonly, copy, nonatomic) NSString *openContainerAppName;
@property (readonly, copy, nonatomic) NSString *openContainerAppIcon;
@property (readonly, nonatomic) unsigned long long openContainerCastType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, nonatomic) IESLiveInteractOpenContainerCastInfo *castInfo;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) int profile;
@property (readonly, nonatomic) long long preferredFPS;

- (void)componentMount;
- (void)componentUnmount;
- (BOOL)canHandleVideoCapture;
- (id)providePrivacyContextForKey:(id)a0;
- (id)commonEventParams;
- (BOOL)shouldAddCameraPreviewInput;
- (id)needIgnoreProcessGeneralVideoCaptureByResumeType:(long long)a0;
- (BOOL)shouldCancelAudioInterruptAfterAppBecomeActive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })openContainerStreamLayoutWithHostLayout:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willStartOpenContainerCastWithAppID:(id)a0 castType:(unsigned long long)a1 extra:(id)a2;
- (void)willStopOpenContainerCastWithAppID:(id)a0 castType:(unsigned long long)a1 extra:(id)a2;
- (void)forceStopOpenContainerCastWithAppID:(id)a0 castType:(unsigned long long)a1 stopResponse:(id)a2 continueBlock:(id /* block */)a3 extra:(id)a4;
- (id)anchorCameraInputRatioTuple;
- (void)componentBindContext;
- (void)bringOpenContainerAppToForeground;
- (void)trackOpenContainerCastWithEventName:(id)a0 extraDict:(id)a1;
- (BOOL)streamProcessEnable;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)componentDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)componentLeaveRoom;
- (BOOL)shouldResumeCasting;
- (void)resumeCastingIfNeeded:(id)a0;
- (id)anchorCameraInputRatioDynamic1V6;
- (BOOL)shouldContinueCastingFromSingleLiveIfNeeded;
- (void).cxx_destruct;
- (id)cameraPreviewView;

@end
