@class MemoryMappedKV, NSRecursiveLock, MMUIViewController, NSMutableDictionary, NSString, NSMutableArray;

@interface MessageBatchRevokeMgr : MMUserService <ISendMessageExt, IMsgExt, BaseMsgViewControllerExt, MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *recordMMKV;
@property (retain, nonatomic) NSRecursiveLock *recordIndexLock;
@property (nonatomic) unsigned long long recordIndex;
@property (nonatomic) BOOL isBatchRevoking;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) unsigned long long deletedLocalMsgCount;
@property (retain, nonatomic) NSMutableArray *waitingSvrIdRevokingList;
@property (retain, nonatomic) NSMutableArray *avaliableRevokingList;
@property (weak, nonatomic) MMUIViewController *currentViewController;
@property (nonatomic) unsigned long long batchRevokingScene;
@property (nonatomic) unsigned long long reportInterval;
@property (retain, nonatomic) NSMutableDictionary *chatToRevokeItemIdListDict;
@property (retain, nonatomic) NSMutableDictionary *msgToRevokeItemIdListDict;
@property (retain, nonatomic) NSMutableDictionary *displayingRevokeItemDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportSimpleAction:(unsigned long long)a0 scene:(unsigned long long)a1 interval:(unsigned long long)a2;
- (void)reportAction:(unsigned long long)a0 scene:(unsigned long long)a1 interval:(unsigned long long)a2 result:(unsigned long long)a3 allRevokingCount:(unsigned long long)a4 sucCount:(unsigned long long)a5 failCount:(unsigned long long)a6;
- (void)addBatchSendForUser:(id)a0 record:(id)a1 identifier:(id)a2;
- (void)removeBatchSendForUser:(id)a0 record:(id)a1;
- (id)getRevokeBatchIdentifierFromUser:(id)a0 scene:(unsigned long long)a1;
- (id)getRevokeBatchIdentifierFromMsgWrap:(id)a0;
- (id)getBatchSendRecordForUser:(id)a0 msg:(id)a1;
- (unsigned long long)getRevokeBatchSceneFor:(id)a0;
- (id)indexOfMsgWrap:(id)a0 user:(id)a1;
- (id)getDisplayMsgId:(id)a0 chatName:(id)a1;
- (void)onGotDisplayMsgList:(id)a0 chatName:(id)a1;
- (void)onEndChat:(id)a0;
- (BOOL)shouldFoldMsg:(id)a0 chatName:(id)a1;
- (BOOL)shouldShowExpandMsg:(id)a0 chatName:(id)a1;
- (BOOL)shouldShowTimeMsg:(id)a0 chatName:(id)a1;
- (id)onUnFoldMsg:(id)a0 chatName:(id)a1;
- (unsigned long long)maxNumberOfContinousRevokes;
- (unsigned long long)minNumberOfContinousRevokesToFold;
- (unsigned long long)numberOfRevokesShowAfterFold;
- (void)onExitBaseMsgSession:(id)a0;
- (void)resetBatchRevokingStatus;
- (void)ensureLoading:(id)a0;
- (BOOL)batchRevokeMsg:(id)a0 MsgWrapList:(id)a1 viewController:(id)a2 actionInterval:(unsigned long long)a3;
- (int)getSendingSendStatusWithMsg:(id)a0;
- (void)deleteLocalProcessRevokeMsg:(id)a0;
- (id)getWatingSvrIdRevokeInfoWithMessage:(id)a0;
- (id)getRevokeInfoWithSvrID:(long long)a0;
- (BOOL)deleteWaitingSvrIdRevokeInfoWithMessage:(id)a0;
- (void)OnMsgGotSvrId:(id)a0;
- (void)checkBatchRevoke;
- (void)realDoBatchRevoke;
- (void)OnSendMessageSuccess:(id)a0;
- (void)OnSendMessageFail:(id)a0;
- (void)OnMsgSendFail:(id)a0;
- (void)OnMsgSendSuccess:(id)a0;
- (void)onGetSvrIdWithUploadMsg:(id)a0 SvrId:(unsigned long long)a1;
- (void)onRevokeMsg:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isBatchRevokeEnabled;
- (void).cxx_destruct;

@end
