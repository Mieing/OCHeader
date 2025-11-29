@class WCTDatabase, WCTTable;

@interface MMMetricsRootDB : NSObject {
    WCTDatabase *m_db;
    WCTTable *m_tableAppRunningInfo;
}

- (id)initWithDBPath:(id)a0;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)vacuumCleaner;
- (id)getAllAppRunningInfos;
- (BOOL)insertOrUpdateAppRunningInfo:(id)a0;
- (BOOL)deleteAppRunningInfo:(id)a0;
- (void).cxx_destruct;

@end
