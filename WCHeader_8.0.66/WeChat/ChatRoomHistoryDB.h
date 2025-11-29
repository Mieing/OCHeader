@class WCTDatabase, WCTTable;

@interface ChatRoomHistoryDB : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *processTagTable;
@property (retain, nonatomic) WCTTable *historyMsgTable;
@property (retain, nonatomic) WCTTable *processingMsgTable;

- (id)init;
- (BOOL)reloadDataBase;
- (void)createTables;
- (BOOL)createProcessTagTable;
- (BOOL)addProcessTagWithHistoryID:(unsigned long long)a0 chatName:(id)a1;
- (BOOL)isHistoryHaveProcessTag:(unsigned long long)a0;
- (void)deleteAllProcessTag:(id)a0;
- (void)deleteProcessTag:(unsigned long long)a0;
- (BOOL)createProcessingMsgTable;
- (BOOL)addProcessingInviteMsg:(id)a0;
- (BOOL)isMsgProcessing:(id)a0;
- (void)deleteProcessingInvitedMsgWrap:(id)a0;
- (void)deleteAllProcessingMsgWithChatName:(id)a0;
- (id)getAllProcessingInvitedMsgWrap;
- (BOOL)createHistoryMsgTable;
- (BOOL)addHistoryMsgObjs:(id)a0 historyInfo:(id)a1;
- (void)deleteHistroyMsg:(id)a0;
- (void)deleteAllHistroyMsgWithChatName:(id)a0;
- (void)deleteAllHistoryObjWithHistoryID:(unsigned long long)a0;
- (id)getHistoryMsgWithMsgWrap:(id)a0;
- (id)getAllHistoryMsgWithHistoryID:(unsigned long long)a0;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (void).cxx_destruct;

@end
