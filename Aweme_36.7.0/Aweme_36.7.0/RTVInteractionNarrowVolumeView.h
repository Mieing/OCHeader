@class NSString, RTVInteractionAvatarView;
@protocol RTVUserProfileManagerInterface, RTVXRCaptureController, RTVSessionPreviewProcotol, RxInjector, RTVXRControllerInjector;

@interface RTVInteractionNarrowVolumeView : UIView <RTVXRCaptureControllerObserver, RTVXRControllerInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) RTVInteractionAvatarView *avatarVolumeView;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) double showTime;
@property (nonatomic) double audioStartAnimationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)xrCaptureController:(id)a0 didReceiveSpeakerAudioVolumUpdates:(id)a1 totalVolume:(unsigned long long)a2;
- (void)__hideAvatarVolumeViewAfterDelay:(double)a0 originDelay:(double)a1 completion:(id /* block */)a2;
- (double)__now;
- (void)__startVolumeViewAnimationWith:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
