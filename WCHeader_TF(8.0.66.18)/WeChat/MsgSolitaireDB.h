@class WCTDatabase, NSString, WCTTable;

@interface MsgSolitaireDB : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *analysistable;
@property (retain, nonatomic) WCTTable *foldTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)reloadDataBase;
- (BOOL)createAnalysisTable;
- (BOOL)addSolitaireAnalysisWithChatName:(id)a0 LocalId:(unsigned int)a1;
- (id)getSolitairesAnalysisWithChatName:(id)a0;
- (BOOL)deleteSolitaireAnalysisWithObj:(id)a0;
- (BOOL)createFoldInfoTable;
- (void)insertFoldInfo:(id)a0;
- (id)getSolitaireFoldInfoWithChatName:(id)a0 localId:(unsigned int)a1 createTime:(unsigned int)a2;
- (void)deleteFoldInfosWithChatName:(id)a0;
- (void)deleteFoldInfosWithMsgWrap:(id)a0;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void).cxx_destruct;

@end
