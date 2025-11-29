@class NSString, HTSEventContext, HTSLiveInteractiveAPI, IESLiveComponentContext, IESLiveAudienceInteractPermissionChecker;
@protocol IESLiveRoomService, IESLiveMonitor, IESLiveInteractionLinkerService;

@interface IESLiveMultiAudioAnchorLinkmicInnerServiceImpl : NSObject <IESLiveInteractionLinkerServiceAction, IESLiveMultiAudioAnchorLinkmicInnerService>

@property (copy, nonatomic) NSString *toast;
@property (nonatomic) BOOL isDisconnectGuest;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI;
@property (retain, nonatomic) IESLiveAudienceInteractPermissionChecker *permissionChecker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)logWithMessage:(id)a0;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (void)muteGuest:(id)a0;
- (void)unMuteGuest:(id)a0;
- (void)muteOtherRoom:(id)a0;
- (void)unMuteOtherRoom:(id)a0;
- (void)getInviteFriendsList:(id)a0 callback:(id /* block */)a1;
- (id)getMuteGusetNicknameByUserID:(id)a0;
- (void)interactionLinkerService:(id)a0 userDidJoinUserList:(id)a1;
- (void)interactionLinkerService:(id)a0 userDidLeaveUserList:(id)a1;
- (void)interactionLinkerService:(id)a0 onReceivedReply:(id)a1 isAgreed:(BOOL)a2;
- (void)interactionLinkerService:(id)a0 onReceiveAutoJoinApplication:(id)a1;
- (void)interactionLinkerService:(id)a0 onAdminAgreeFirstInvite:(id)a1;
- (unsigned long long)sceneFromRoomType;
- (id)roleForLog;
- (id)sceneForLog;
- (void)acceptConnectionWithWaitingListUser:(id)a0 eventParams:(id)a1;
- (void)inviteUserWithSecID:(id)a0 userID:(id)a1 eventParams:(id)a2;
- (void)stopConnectionWithUserID:(id)a0 secUserID:(id)a1 eventParams:(id)a2;
- (void)acceptConnectionWithUserID:(id)a0 secUserID:(id)a1 linkType:(unsigned long long)a2 type:(id)a3 eventParams:(id)a4;
- (void)pr_inviteEventWithUserID:(id)a0 eventParams:(id)a1;
- (void)inviteUserWithInviteParams:(id)a0;
- (void)pr_stopConnectionEventWith:(id)a0 eventParams:(id)a1;
- (int)layoutFromRoomType;
- (void)pr_permitEventWith:(id)a0 linkType:(id)a1 eventParams:(id)a2;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (id)channel;

@end
