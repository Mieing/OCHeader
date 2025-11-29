@class UIView, RTVVoipParticipator, BDImageView;
@protocol RTVVoipConfigureManagerInterface, RTVUserProfileManagerInterface, RTVXRControllerInjector;

@interface RTVVoipNarrowSingleAvatarView : UIView

@property (readonly, nonatomic) BDImageView *avatarView;
@property (readonly, nonatomic) UIView *avatarShadowView;
@property (readonly, nonatomic) UIView *callingIndicator;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVVoipParticipator *voipParticipator;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderWithModel:(id)a0;
- (void)__refreshAvatarView;
- (void)stopCallingAnimation;
- (void)configAvatarBorder:(double)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
