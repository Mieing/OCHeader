@class IESLiveLGameScreenCastManager, BDLOCNativeGameInstance, NSString, IESLiveLGameInteractInstance;
@protocol IESLiveVideoEffectProcessing, IESLiveRealStreamingProvider;

@interface IESLiveLGameXplayScreenCastForwardImpl : NSObject <IESLiveLGameLifeCycleAction, IESLiveLGameScreenCastAction, IESLiveLGameInteractInstanceDelegate, IESLiveLGameScreenCastForwardProtocol>

@property (weak, nonatomic) BDLOCNativeGameInstance *gameInstance;
@property (retain, nonatomic) IESLiveLGameInteractInstance *interactInstance;
@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamProvider;
@property (weak, nonatomic) id<IESLiveVideoEffectProcessing> effectProcessingService;
@property (nonatomic) struct CGSize { double width; double height; } originalOutputSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraRect;
@property (nonatomic) BOOL cameraOpenStatus;
@property (nonatomic) BOOL floatBallIsOpen;
@property (nonatomic) struct CGSize { double width; double height; } gameCastSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLiveLGameScreenCastManager *screenCastManager;

- (void)didSetAttachingDIContext;
- (void)app:(id)a0 orientationChange:(long long)a1;
- (void)stopScreenCast;
- (void)nativeGameCameraStatusChange:(BOOL)a0;
- (void)nativeGameUpdateCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCameraRectAndOutputSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)closeCamera;
- (BOOL)gameIsLandscape;
- (void)updateCameraRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCameraOutputSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreCameraRotation;
- (void)rotateCameraIfNeed;
- (BOOL)liveIsTop;
- (void)rotateCamera;
- (void)restoreCameraPreview;
- (void)sendAudioFrame:(id)a0;
- (void)didReceiveMergeStreamFailed:(id)a0;
- (void)changeRecordStatus:(BOOL)a0;
- (void)lGameInteractServiceDidStart:(id)a0;
- (void)lGameInteract:(id)a0 firstRemoteVideoFrameWithUid:(id)a1;
- (void)lGameInteract:(id)a0 didOfflineOfUid:(id)a1;
- (void)lGameInteract:(id)a0 receivesError:(id)a1;
- (void)lGameInteractLostConnection:(id)a0;
- (BOOL)isLiveRecording;
- (void)updateCameraOpenStatus:(BOOL)a0;
- (void)startScreenCastIfNeed:(unsigned long long)a0;
- (void)stopGameScreenCastIfNeed;
- (void)sendEvent:(long long)a0 extra:(id)a1;
- (void)handleEventViewDidDisappear;
- (void)resetCamera;
- (id)monitorRtcInfoFailIfNeed;
- (void)showFailAlert;
- (void)startScreenCast;
- (void)adjustRTCStreamSize;
- (void)monitorServiceError:(id)a0 status:(id)a1 error:(id)a2;
- (void)handleEventEnterForeground;
- (void)handleEventEnterBackground;
- (struct CGSize { double x0; double x1; })getGameScreenCastSize:(struct CGSize { double x0; double x1; })a0;
- (void)openCamera;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)startVideoCapture;
- (void)stopVideoCapture;
- (id)initWithInstance:(id)a0;

@end
