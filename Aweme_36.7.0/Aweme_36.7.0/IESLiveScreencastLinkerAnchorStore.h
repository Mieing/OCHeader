@class IESLiveScreencastLinkerAnchorInstance, NSString, IESLiveCountTimer, HTSEventContext, IESLiveScreencastLinkerModel, IESLiveScreencastLinkerAnchorBuilder, IESLiveInteractiveUserService;
@protocol IESLiveRoomService, IESLiveScreencastLinkAnchorParticipationInfo;

@interface IESLiveScreencastLinkerAnchorStore : NSObject <IESLiveScreencastLinkerAnchorBuilderDelegate, IESLiveScreencastLinkerAnchorInstanceDelegate, IESLiveAnchorScreencastLinkNotifyViewControllerDelegate, IESLiveScreencastLinkerAnchorProvider>

@property (retain, nonatomic) IESLiveScreencastLinkerAnchorBuilder *linkerBuilder;
@property (retain, nonatomic) IESLiveScreencastLinkerAnchorInstance *linkerInstance;
@property (retain, nonatomic) IESLiveInteractiveUserService *userService;
@property (retain, nonatomic) IESLiveCountTimer *timeoutTimer;
@property (nonatomic) BOOL isInvitee;
@property (retain, nonatomic) NSString *linkAnchorCategory;
@property (nonatomic) unsigned long long listType;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) BOOL isLinkerProcessing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveScreencastLinkerModel *linkerModel;
@property (nonatomic) unsigned long long finishReason;
@property (weak, nonatomic) id<IESLiveScreencastLinkAnchorParticipationInfo> anchorParticipationInfo;
@property (copy, nonatomic) NSString *remoteAnchorLinkmicIdStr;
@property (copy, nonatomic) NSString *notificationContent;
@property (nonatomic) unsigned long long status;

- (void)didSetAttachingDIContext;
- (void)bindAction;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)reportTrackerWithEvent:(id)a0 extra:(id)a1;
- (void)muteRemoteAudioStreamWithLinkmicID:(id)a0 mute:(BOOL)a1 reason:(id)a2;
- (void)leaveChannelWithSource:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)inviteToRoomID:(id)a0 inviteUser:(id)a1 listType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)cancelInviteWithRoomID:(id)a0 inviteUser:(id)a1 source:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)replyUserWithReplyType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)reportCommonTrackerWithEvent:(id)a0 extra:(id)a1;
- (BOOL)getLocalLinkMuteStatus;
- (id)remoteAnchorIDForAnchor;
- (void)screencastLinkNotifyViewControllerRejectWithTimeout:(BOOL)a0 onInvite:(BOOL)a1;
- (void)screencastLinkNotifyViewControllerAcceptOnInvite:(BOOL)a0;
- (void)connectionEstablishedSuccessfullyByBuilder:(id)a0;
- (void)receivedInviteMessageWithInviteContent:(id)a0 extra:(id)a1;
- (void)firstRemoteAudioFrameSuccessfulWithInstance:(id)a0;
- (void)linkInstance:(id)a0 didUserOfflineWithUid:(id)a1 reason:(unsigned long long)a2;
- (void)resetLinkerModel;
- (void)saveLinkMuteStatusToLocal:(BOOL)a0;
- (void)scheduledConnectTimeoutTimer;
- (void)reportInviteNotifyLogWithType:(id)a0;
- (void)destoryLinkerResources;
- (void).cxx_destruct;

@end
