@class WCTDatabase, NSArray, NSString;

@interface MusicHistoryManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) NSArray *approvedAppidList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databasePath;
+ (id)databaseRepairPath;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (BOOL)canBeAddedToHistory:(id)a0;
- (void)updateMusicListened:(id)a0;
- (void)reloadDataBase;
- (id)loadHistoryItemFromDatabaseWithLimit:(long long)a0 offset:(long long)a1;
- (double)validTimeStamp;
- (BOOL)insertOrUpdate:(id)a0;
- (void)clearAllInDataBase;
- (void)clearUselessRecordWithCompletion:(id /* block */)a0;
- (void)_clearUselessRecord;
- (void).cxx_destruct;

@end
