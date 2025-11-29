@class TypingSyncKeyBuff, NSString, WCTDatabase, NSMutableOrderedSet, WCTTable;

@interface ChatTypingMgr : MMUserService <MMKernelExt, MMServiceProtocol>

@property (nonatomic) BOOL isSyncing;
@property (retain, nonatomic) NSMutableOrderedSet *pendingSync;
@property (retain, nonatomic) TypingSyncKeyBuff *syncBuff;
@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *table;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNewTyping;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)syncWithActionNotifyData:(id)a0;
- (id)getTicket:(id)a0;
- (void)tryGetTypingTicket;
- (void)getTypingTicket:(int)a0;
- (void)setSyncKey:(unsigned long long)a0;
- (id)mergeBuffer:(id)a0 newBuffer:(id)a1;
- (id)getSyncBuffFilePath;
- (id)getDBPath;
- (BOOL)insertOrUpdateItem:(id)a0;
- (void)onAuthOK;
- (void).cxx_destruct;

@end
