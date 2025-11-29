@class NSString, NSMutableArray, NSMutableDictionary;

@interface MessageRevokeMgr : MMUserService <ISendMessageExt, IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *arrRevokeInfo;
@property (retain, nonatomic) NSMutableDictionary *serverIdToBatchRevokingWrapMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRevokeWrap:(id)a0 toChat:(id)a1;
- (void)addRevokeWrapNewFormat:(id)a0 toChat:(id)a1;
- (void)addRevokeWrapLegacy:(id)a0 toChat:(id)a1;
- (void)updateRevokeMsgContent:(id)a0;
- (BOOL)isMessageWrapNewRevokeMsg:(id)a0;
- (id)convertNewRevokeMsgToClassicOne:(id)a0;
- (BOOL)isRevokeMsgFoldEnabled;
- (void)addMsgToNoHandleXML:(id)a0;
- (void)removeMsgFromNoHandleXML:(long long)a0;
- (BOOL)isServerIdCorrespondToBatchRevoke:(long long)a0;
- (void)batchReplaceRevokedMsg:(id)a0;
- (void)onServiceInit;
- (void)addOrUpdateOccupyMsgRevokeInfo:(id)a0 overwriteMsgID:(unsigned long long)a1;
- (void)onServiceClearData;
- (BOOL)RevokeMsg:(id)a0 MsgWrap:(id)a1 Counter:(unsigned int)a2 revokeTicket:(id)a3 viewController:(id)a4;
- (id)createRevokeWrapSelfSend:(id)a0;
- (void)sendRevorkRequest:(id)a0 revokeInfo:(id)a1;
- (void)onRevokeMsgFinish:(id)a0 response:(id)a1 revokeInfo:(id)a2;
- (void)onRevokeMsgFinish:(id)a0 response:(id)a1 msgWrap:(id)a2;
- (long long)defaultMsgRevokeTime;
- (long long)msgRevokeTimeByMsg:(id)a0;
- (long long)msgRevokeTimeByMsgType:(unsigned int)a0 innerType:(unsigned int)a1;
- (id)getMessageWrapWithOverwriteMsgID:(long long)a0 chatName:(id)a1;
- (BOOL)isOpenRevokeWhenSending;
- (int)getSendingSendStatusWithMsg:(id)a0;
- (id)getRevokeInfoWithMessage:(id)a0;
- (id)getRevokeInfoWithSvrID:(long long)a0;
- (BOOL)deleteRevokeInfoWithMessage:(id)a0;
- (void)deleteLocalProcessRevokeMsgWithToast:(id)a0;
- (void)replaceRevokedMsg:(id)a0;
- (BOOL)revokeMsgIfNeed:(id)a0;
- (void)OnSendMessageSuccess:(id)a0;
- (void)OnSendMessageFail:(id)a0;
- (void)OnMsgSendFail:(id)a0;
- (void)OnMsgSendSuccess:(id)a0;
- (void)onGetSvrIdWithUploadMsg:(id)a0 SvrId:(unsigned long long)a1;
- (void)onRevokeMsg:(id)a0;
- (void).cxx_destruct;

@end
