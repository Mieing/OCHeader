@protocol RxInjector;

@interface RTVXRInteractionTracker : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;

- (void)__trackeEvent:(id)a0 params:(id)a1;
- (id)__commonParamsWithRoomID:(id)a0 interactionType:(unsigned long long)a1;
- (void)tracker_invitationTipsShowWithRoomID:(id)a0 interactionType:(unsigned long long)a1;
- (void)tracker_clickInvitationTipsAvatarWithRoomID:(id)a0 interactionType:(unsigned long long)a1;
- (void)tracker_sendInvitationWithRoomID:(id)a0 interactionType:(unsigned long long)a1 invitedUserCount:(unsigned long long)a2 inviteType:(id)a3;
- (void)tracker_invitationTipsEndWithRoomID:(id)a0 interactionType:(unsigned long long)a1 shownCount:(unsigned long long)a2;
- (void).cxx_destruct;

@end
