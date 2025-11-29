@class NSString, VoipGetRoomInfoCgi;

@interface VOIPMessageMgr : MMUserService <MonoServiceMsgDelegate, MonoServiceMsgLogicDelegate, VoipGetRoomInfoCgiDelegate, VoIPInvitationServiceExtension, PBMessageObserverDelegate, MMServiceProtocol, IMsgExt, VoIPPushKitExt>

@property (retain, nonatomic) VoipGetRoomInfoCgi *m_getRoomInfoCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportAckWithCallResult:(int)a0 ByVoipMsg:(id)a1;
+ (id)genInviteMessageFromVoipMonoMsg:(id)a0;
+ (void)handleVoipLocalBusy:(id)a0;
+ (BOOL)handleInviteMonoMsg:(id)a0;
+ (BOOL)startVoipViewByVoipMonoMsg:(id)a0;
+ (BOOL)openVoipViewByVoipMonoMsg:(id)a0 haveAnswered:(BOOL)a1 isilink:(BOOL)a2;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onMonoServiceMsgStartWithMsg:(id)a0;
- (BOOL)onMonoServiceMsgHandleWithMsg:(id)a0;
- (BOOL)onMonoServiceMsgRejectWithMsg:(id)a0;
- (BOOL)onMonoServiceMsgCancelWithMsg:(id)a0;
- (BOOL)onMonoServiceMsgHoldWithMsg:(id)a0;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isMonoServiceCheckingServer;
- (void)didMonoServiceRejectMsg;
- (void)onVoipGetRoomInfoCgiParaError:(id)a0;
- (void)onVoipGetRoomInfoCgiCreateFailed:(id)a0;
- (void)onVoipGetRoomInfoCgiConnectFailed:(id)a0;
- (void)onVoipGetRoomInfoCgiRespNull:(id)a0;
- (void)onVoipGetRoomInfoCgiRespFailed:(id)a0;
- (void)onVoipGetRoomInfoCgiOk:(id)a0;
- (void)OnMsgNotAddDBNotify:(id)a0 MsgWrap:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)receiveInviteFromNotify:(id)a0;
- (void)receiveCancelFromNotify:(id)a0;
- (void)receiveOtherDeviceHandleSignalFromSecurityNotify:(id)a0;
- (void)receiveAnsweredFromNotify:(id)a0;
- (void)receiveCancelMsgFromSync:(id)a0 MsgWrap:(id)a1;
- (void)receiveInviteFromSync:(id)a0 MsgWrap:(id)a1;
- (void)handleVoipBusy:(id)a0 MsgWrap:(id)a1;
- (void)handleAPNSPushSyncNotificationContentInfo:(id)a0;
- (void)handleAPNSPushUserInfos:(id)a0;
- (void)handlePushKitUserInfos:(id)a0;
- (void)onReceiveVoIPPushInfo:(id)a0;
- (void)voIPInvitationServiceDidRejectWithInfo:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
