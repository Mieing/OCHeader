@class WCTDatabase, WCTTable;

@interface WebStorageDb : NSObject

@property (retain, nonatomic) WCTDatabase *db;
@property (retain) WCTTable *tableWebStorageConfig;
@property (retain) WCTTable *tableWebStorageGlobalConfig;

- (BOOL)initDb;
- (void)createTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)closeDb;
- (void)closeDbBeforeInit;
- (BOOL)setConfig:(id)a0 Key:(id)a1 ValueSzie:(unsigned int)a2 WeightStr:(id)a3 ExpireTimestamp:(unsigned int)a4 FilePath:(id)a5;
- (id)getGlobalConfig:(id)a0 WeightStr:(id)a1;
- (BOOL)insertWeightIfNeed:(id)a0 WeightStr:(id)a1;
- (void)adjustRealWeight:(id)a0;
- (BOOL)compareWeightStr:(id)a0 WeightStr2:(id)a1;
- (long long)getStorageSize:(id)a0;
- (id)getWebStorageConfig:(id)a0 Key:(id)a1;
- (id)getNewestWebStorageConfig:(id)a0;
- (id)getStorageAppIdList;
- (id)getAscendingWeightStrArray:(id)a0;
- (id)getOldestWebStorageConfig:(id)a0 WeightStr:(id)a1;
- (id)getExpireConfigList;
- (BOOL)deleteConfig:(id)a0 Key:(id)a1;
- (BOOL)deleteConfigsWith:(id)a0;
- (BOOL)deleteGlobalConfigsWith:(id)a0;
- (BOOL)deleteGlobalConfig:(id)a0 WeightStr:(id)a1;
- (id)getAllConfig;
- (id)getAllGlobalConfig;
- (void).cxx_destruct;

@end
