@class WCTDatabase, NSString, WCTTable;

@interface TemplateMsgFoldMgr : MMUserService <MMServiceProtocol, IMsgExt, IExptServiceExt>

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *table;
@property (nonatomic) BOOL hasInit;
@property (nonatomic) BOOL isFoldExptEnable;
@property (nonatomic) unsigned int enterPageTime;
@property (nonatomic) unsigned int lastUnreadMsgLocalId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldOpenTemplateMsgHolderFoldSwitch;
- (id)createTable;
- (id)getDBPath;
- (void)addRowWithMsgLocalId:(unsigned int)a0 foldedMsgLocalId:(unsigned int)a1 foldMsgLocalIds:(id)a2 foldMsgUniqueIds:(id)a3 foldTitles:(id)a4;
- (void)addRowWithMsgLocalId:(unsigned int)a0 foldedMsgLocalId:(unsigned int)a1 foldMsgLocalIds:(id)a2 foldMsgUniqueIds:(id)a3 foldTitles:(id)a4 clusterId:(id)a5;
- (void)addOrUpdateRowWithMsgLocalId:(unsigned int)a0 foldedMsgLocalId:(unsigned int)a1 foldMsgLocalIds:(id)a2 foldMsgUniqueIds:(id)a3 foldTitles:(id)a4 clusterId:(id)a5;
- (void)removeRowWithMsgLocalId:(unsigned int)a0;
- (id)msgDataWithMsgLocalId:(unsigned int)a0;
- (void)removeAllFoldMsgs;
- (id)getFoldMsgTablesWithFromID:(unsigned int)a0 limit:(int)a1 isEarlier:(BOOL)a2;
- (unsigned int)getFoldCountWithMsgLocalId:(unsigned int)a0;
- (id)tableNameString;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)DelMsg:(id)a0 MsgList:(id)a1 DelAll:(BOOL)a2;
- (BOOL)isTemplateUserName:(id)a0;
- (void)onExptItemListChange;
- (void)setupReportParams:(unsigned int)a0;
- (void)reportTemplateFoldMsg:(id)a0 reportItem:(id)a1;
- (void)reportTemplateFoldMsg:(id)a0 reportItem:(id)a1 objectType:(long long)a2;
- (id)reportUserNameFromTemlateMessageWrap:(id)a0;
- (id)templateIdFromTemlateMessageWrap:(id)a0;
- (id)msgContentFromTemlateMessageWrap:(id)a0;
- (void).cxx_destruct;

@end
