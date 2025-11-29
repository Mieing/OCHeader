@class NSString, VoIPIlinkSubCallCache;

@interface VoIPIlinkSubCallService : MMUserService <VoIPConfSDKServiceExtension, MonoServiceMsgDelegate, VoIPInvitationServiceExtension, MMServiceProtocol>

@property (retain, nonatomic) VoIPIlinkSubCallCache *cache;
@property (nonatomic) BOOL isWaitingForAccept;
@property (nonatomic) unsigned long long endingRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (BOOL)receiveInviteMsg:(id)a0 fromUsername:(id)a1 withMsgWrap:(id)a2 notifyFrom:(int)a3;
- (BOOL)receiveCancelInviteMsg:(id)a0 fromUsername:(id)a1 withMsgWrap:(id)a2 notifyFrom:(int)a3;
- (void)receiveInviteData:(id)a0;
- (void)reject;
- (void)cancel;
- (void)tryToAccept;
- (BOOL)acceptWithRoomID:(unsigned long long)a0;
- (id)init;
- (void)onServiceClearData;
- (void)onMonoServiceMsgStartWithMsg:(id)a0;
- (BOOL)onMonoServiceMsgHandleWithMsg:(id)a0;
- (BOOL)onMonoServiceMsgRejectWithMsg:(id)a0;
- (BOOL)onMonoServiceMsgCancelWithMsg:(id)a0;
- (BOOL)onMonoServiceMsgHoldWithMsg:(id)a0;
- (void)voIPConfSDKServiceOnReceiveEvent:(int)a0 errCode:(int)a1 data:(id)a2 ret:(id)a3;
- (void)voIPConfSDKServiceOnReceiveMainCallEndEvent;
- (void)voIPConfSDKServiceWillInterrputVoIPByCall:(BOOL)a0;
- (void)voIPInvitationServiceWillAcceptWithInfo:(id)a0;
- (void)voIPInvitationServiceDidRejectWithInfo:(id)a0;
- (void).cxx_destruct;

@end
