@class WCTDatabase, WCTTable;

@interface EdgeComputingCacheStrategyWCDB : EdgeComputingCacheStrategyBase {
    WCTDatabase *_dataBase;
    WCTTable *_cacheDataTable;
}

- (id)getTableName;
- (void)reset;
- (void)close;
- (id)genDBPath;
- (void)save:(id)a0;
- (void)remove:(id)a0;
- (void)clear;
- (void)deleteExpire:(unsigned long long)a0;
- (id)query:(id)a0;
- (unsigned long long)count;
- (void).cxx_destruct;

@end
