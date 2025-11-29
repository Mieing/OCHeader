@class NSString, UIImageView, RTVInteractionAvatarViewContext, UIView, BDImageView;
@protocol RTVUserProfileManagerInterface, RTVVoipConfigureManagerInterface, RTVXRCaptureController, RxInjector, RTVXRControllerInjector, RTVVoipSettingManagerInterface, RTVSessionPreviewProcotol;

@interface RTVInteractionAvatarView : UIView <RTVXRCaptureControllerObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, weak, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) id<RTVVoipSettingManagerInterface> settingManager;
@property (readonly, weak, nonatomic) id<RTVSessionPreviewProcotol> session;
@property (readonly, nonatomic) RTVInteractionAvatarViewContext *context;
@property (readonly, nonatomic) BDImageView *roundAvatarView;
@property (readonly, nonatomic) UIImageView *avatarBlurView;
@property (retain, nonatomic) UIView *audioVolumeIndicator;
@property (retain, nonatomic) UIView *avatarOuterBorder;
@property BOOL enableAudioIndicate;
@property (nonatomic) BOOL blurred;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) BOOL outerBorderShowing;
@property (weak, nonatomic) UIImageView *bindedBackgroundBlurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__createDependency;
- (void)enableAudioIndicate:(BOOL)a0;
- (void)xrCaptureController:(id)a0 didReceiveSpeakerAudioVolumUpdates:(id)a1 totalVolume:(unsigned long long)a2;
- (void)__udpateComponentsWithAnimation;
- (void)__updateComponentsWithoutAnimation;
- (void)__updateBorderAndBlurView;
- (id)__downloadImageFromURL:(id)a0;
- (void)__updateAvatarViewWithImage:(id)a0;
- (void)__updateAudioVolumeIndicator:(long long)a0;
- (void)updateBlurred:(BOOL)a0;
- (void)hideOuterBorder:(BOOL)a0;
- (id)__blurImageWithImage:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
