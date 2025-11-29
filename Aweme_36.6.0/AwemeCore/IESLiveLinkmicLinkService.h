@class NSString;
@protocol IESLiveLinkmicLinkApi, IESLiveLinkmicLinkMessage, IESLiveLinkmicMonitor, IESLiveLinkmicLinkServiceDelegate;

@interface IESLiveLinkmicLinkService : NSObject <IESLiveLinkmicLinkMessageDelegate, IESLiveLinkmicLinkServiceInterface>

@property (retain, nonatomic) id<IESLiveLinkmicLinkApi> linkApi;
@property (retain, nonatomic) id<IESLiveLinkmicLinkMessage> linkMessage;
@property (retain, nonatomic) id<IESLiveLinkmicMonitor> linkmicMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveLinkmicLinkServiceDelegate> linkDelegate;

- (void)didSetAttachingDIContext;
- (void)onReceivedCreateMessage:(id)a0;
- (void)onReceivedCloseMessage:(id)a0;
- (void)onReceivedInviteMessage:(id)a0;
- (void)onReceivedReplyMessage:(id)a0;
- (void)onReceivedPermitMessage:(id)a0;
- (void)onReceivedEnterMessage:(id)a0;
- (void)onReceivedLeaveMessage:(id)a0;
- (void)onReceivedKickoutedMessage:(id)a0;
- (void)onReceivedApplyMessage:(id)a0;
- (void)applyWithMode:(long long)a0 seatIndex:(long long)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)turnOnWithParams:(id)a0 completion:(id /* block */)a1;
- (void)turnOffWithParams:(id)a0 completion:(id /* block */)a1;
- (void)inviteWithSecUserID:(id)a0 seatIndex:(long long)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)cancelInviteWithSecUserID:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)replyInviteWithType:(unsigned long long)a0 toSecUserId:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)cancelApplyWithParams:(id)a0 completion:(id /* block */)a1;
- (void)replyApplyWithType:(unsigned long long)a0 toSecUserId:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)permitWithUserID:(id)a0 secUserID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)joinChannel:(id)a0 completion:(id /* block */)a1;
- (void)kickoutWithUserID:(id)a0 secUserID:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)leaveChannel:(id)a0 completion:(id /* block */)a1;
- (void)silenceWithUserID:(id)a0 secUserID:(id)a1 isSilence:(BOOL)a2 params:(id)a3 completion:(id /* block */)a4;
- (void)updateLinkmicMonitor:(id)a0;
- (void)handleLinkMicMethod:(id)a0;
- (void)onReceivedInviteCancelMessage:(id)a0;
- (void)onReceivedApplyCancelMessage:(id)a0;
- (void)updateLinkerSessionIDWithContext:(id)a0 source:(id)a1;
- (void)addExtraParamsToLinkParams:(id)a0;
- (void)updateLinkerMediaType:(id)a0 source:(id)a1;
- (id)initWithApi:(id)a0 message:(id)a1;
- (void).cxx_destruct;

@end
