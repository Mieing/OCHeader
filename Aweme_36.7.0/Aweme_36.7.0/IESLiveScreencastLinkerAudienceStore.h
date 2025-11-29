@class IESLiveScreencastLinkerModel, HTSEventContext, NSString, IESLiveInteractiveLinkService, IESLiveInteractiveUserService;
@protocol IESLiveRoomService, IESLiveScreencastLinkAnchorParticipationInfo;

@interface IESLiveScreencastLinkerAudienceStore : NSObject <IESLiveSEIListener, IESLiveInteractiveLinkServiceDelegate, IESLiveInteractiveUserServiceDelegate, IESLiveScreencastLinkerAnchorProvider>

@property (retain, nonatomic) IESLiveInteractiveUserService *userService;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (readonly, nonatomic) BOOL isMultiLinkerProcessing;
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

- (void)componentMount;
- (void)didSetAttachingDIContext;
- (void)remoteRoomDataReady:(id)a0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)bindActions;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)onReceivedLinkEnterMessage:(id)a0;
- (void)onReceivedLinkCloseMessage:(id)a0;
- (void)onReceivedLinkLeaveMessage:(id)a0;
- (void)multiLinkerUserService:(id)a0 didInteractiveListUpdated:(id)a1;
- (void)listenSEIChange;
- (void)setupLinkerProvider;
- (void)fetchLinkedUsersIfNeeded;
- (void)fetchLinkedUsers;
- (void).cxx_destruct;

@end
