@class NSString, NSMutableSet;

@interface EnterpriseChatMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, IEnterpriseBizTransferExt> {
    NSMutableSet *m_markingMsgRead;
    NSMutableSet *m_pendingMarkMsgRead;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)enterChat:(id)a0;
- (void)quitChat:(id)a0;
- (void)markChatRead:(id)a0;
- (void)qyStatusNotify:(id)a0 bizChatId:(id)a1;
- (void)handleQyMsgStateNotifyResp:(id)a0;
- (unsigned int)genRandomClienMsgId;
- (void)statusNotify:(id)a0 code:(int)a1 arg:(id)a2;
- (void)handleStatusNotifyResp:(id)a0;
- (void)statusNotifyEnterSession:(id)a0;
- (void)statusNotifyQuitSession:(id)a0;
- (void)statusNotifyMarkRead:(id)a0;
- (void)onRemoteDeviceEnterChat:(id)a0;
- (void)onRemoteDeviceQuitChat:(id)a0;
- (void)onRemoteDeviceMarkChatRead:(id)a0;
- (void)clearUnReadForRemoteDevice:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)bizTransferReq:(unsigned int)a0 bizBody:(id)a1 mainBrandUserName:(id)a2;
- (void)handleBizTransfer:(id)a0;
- (void)onBizTransferResult:(int)a0 errorMsg:(id)a1 cmd:(unsigned int)a2 bodyData:(id)a3 mainBrandUserName:(id)a4;
- (void)requestInviteShareInfo:(id)a0;
- (void).cxx_destruct;

@end
