@class UIImageView, NSString, UIView;
@protocol RTVUserProfileManagerInterface, RTVXRCaptureController, RTVXRRoomSessionControllerInterface, RxInjector, RTVXRControllerInjector, RTVVoipResourceFetcherInterface;

@interface RTVInteractionLandscapeMicButton : UIControl <RTVXRControllerInterface, RTVXRCaptureControllerObserver, RTVInteractionLandscapeMicButton>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> roomController;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UIView *volumeIndicatorCoverView;
@property (readonly, nonatomic) UIView *volumeIndicatorView;
@property (readonly, nonatomic) UIView *volumeIndicatorMaskView;
@property (nonatomic) BOOL isVolumeIndicatorAnimating;
@property (nonatomic) double volumeAnimationTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (BOOL)microphoneIsMuted;
- (void)hideBackground:(BOOL)a0;
- (void)enableSelfResponseToClick;
- (void)xrCaptureController:(id)a0 didChangeToMicrophoneMuted:(BOOL)a1;
- (void)xrCaptureController:(id)a0 didReceiveSpeakerAudioVolumUpdates:(id)a1 totalVolume:(unsigned long long)a2;
- (void)__handleMuteMicrophone;
- (void)__updateVolumeIndicatorProgressViewProgress:(double)a0;
- (void)__refreshMicUIState;
- (void)__updateVolumeProgressTo:(double)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
