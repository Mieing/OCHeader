@class NSString, RTVInteractionAvatarView;
@protocol RTVUserProfileManagerInterface, RTVXRRoomSessionControllerInterface, RTVXRControllerInjector;

@interface RTVInteractionNarrowAvatarsView : UIView <RTVXRControllerInterface, RTVXRRoomSessionControllerObserver>

@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomSessionControllerInterface> sessionController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (retain, nonatomic) RTVInteractionAvatarView *avatarFirst;
@property (retain, nonatomic) RTVInteractionAvatarView *avatarSecond;
@property (retain, nonatomic) RTVInteractionAvatarView *avatarThird;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (void)renderBusinessHandler:(id)a0 context:(id)a1;
- (void)rtvSession:(id)a0 participatorsDidChange:(id)a1 oldParticipators:(id)a2;
- (void)__create;
- (id)__otherInCallParticipators:(id)a0;
- (void)__updateAvatarsWithParticipators:(id)a0;
- (id)__avatarViews;
- (void)__updateAvatarView:(id)a0 withParticipator:(id)a1 avatarBorderWidth:(double)a2 borderColor:(id)a3;
- (void).cxx_destruct;
- (void)__layout;

@end
