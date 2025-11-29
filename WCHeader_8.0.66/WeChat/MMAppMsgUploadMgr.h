@class MMAppMsgUploadDataBase, NSMutableDictionary, NSString;

@interface MMAppMsgUploadMgr : MMUserService <PBMessageObserverDelegate, IMsgExt, IGroupMgrExt, MessageDBExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *msgWrapDict;
@property (retain, nonatomic) MMAppMsgUploadDataBase *database;
@property (nonatomic) BOOL shouldStopClean;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cleanData;
- (BOOL)appMsgUploadStart:(id)a0;
- (void)appMsgUploadStartInternal:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleSendAppMsgResponse:(id)a0 Event:(unsigned int)a1;
- (void)appMsgUploadPause:(id)a0;
- (void)appMsgUploadComplete:(id)a0;
- (void)appMsgUploadStop:(id)a0;
- (unsigned int)getAppMsgUploadUiPercent:(id)a0;
- (BOOL)checkAppMsgShowRevokeMenu:(id)a0;
- (BOOL)checkAppMsgUploadExceedTime:(id)a0;
- (void)calcMd5ForMessage:(id)a0;
- (void)OnQuitGroup:(id)a0;
- (void)onDeleteAllMsgs:(id)a0;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
