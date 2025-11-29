@class NSRecursiveLock, NSString, CMessageWrap, ChatRoomHistoryDB, NSMutableArray;

@interface ChatRoomHistoryMgr : MMUserService <IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) CMessageWrap *currMsgWrap;
@property (retain, nonatomic) ChatRoomHistoryDB *historyDB;
@property (retain, nonatomic) NSMutableArray *arrProcessingMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (unsigned long long)getHistoryIDWithMsgWrap:(id)a0;
- (void)makeProcessTagForHistory:(id)a0 chatName:(id)a1;
- (BOOL)isHistoryHaveProcessTag:(id)a0;
- (BOOL)isHistoryMsgIsProcessing:(id)a0;
- (BOOL)canAddTipsNodeWithMsg:(id)a0;
- (void)revokeAllMsgWithHistoryID:(unsigned long long)a0 chatName:(id)a1;
- (unsigned int)getRealMsgCreateTime:(id)a0;
- (BOOL)tryProcessInviteMsg:(id)a0;
- (void)checkQueue;
- (void)downloadAddMsgData;
- (void)onDownloadSuccessWithFilePath:(id)a0;
- (void)parseHistoryMsgList:(id)a0 toArrMsg:(id)a1 toArrHistoryMsg:(id)a2 historyInfo:(id)a3;
- (void)onDownloadFail;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void).cxx_destruct;

@end
