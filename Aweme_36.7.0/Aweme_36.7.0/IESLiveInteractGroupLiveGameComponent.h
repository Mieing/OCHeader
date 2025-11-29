@class NSString, IESLiveInteractGroupLiveGameApi, NSMutableDictionary;
@protocol IESLiveInteractiveInviteService;

@interface IESLiveInteractGroupLiveGameComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveInteractGroupLiveGameService, IESLiveInteractionLinkerServiceAction, IESLiveInteractXplayLifeCircleActions>

@property (retain, nonatomic) NSString *inviteScene;
@property (retain, nonatomic) IESLiveInteractGroupLiveGameApi *groupGameApi;
@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendsService;
@property (retain, nonatomic) NSMutableDictionary *inviteLimitMap;
@property (copy, nonatomic) id /* block */ autoJoinLinkmicTimeoutBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)interactionLinkerService:(id)a0 didCloseWithContext:(id)a1;
- (void)interactionLinkerService:(id)a0 didDisconnectWithContext:(id)a1;
- (void)interactionLinkerService:(id)a0 interactReceiveError:(id)a1;
- (void)componentBindContext;
- (void)didStartInteractDanmuGame:(id)a0 isFromSwitchGame:(BOOL)a1;
- (void)didStopInteractDanmuGame:(id)a0;
- (void)onXplayFirstFrameFromSwitchGame:(BOOL)a0;
- (void)onClickInviteButton;
- (id)inviteSceneWithRoomVisibilityRange:(long long)a0;
- (void)closeRoomWithSource:(id)a0 code:(long long)a1 reason:(id)a2;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)trackData;

@end
