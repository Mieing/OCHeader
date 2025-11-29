@class NSMutableDictionary;

@interface EdgeComputingDBService : MMObject {
    NSMutableDictionary *_dBMgrCache;
}

- (id)init;
- (id)getOrCreateDBMgr:(id)a0;
- (id)queryDataBySQL:(id)a0 withSQL:(id)a1;
- (BOOL)saveDatasToDB:(id)a0 withTable:(id)a1 withFields:(id)a2 withDatas:(id)a3;
- (BOOL)checkTableExist:(id)a0 withDB:(id)a1;
- (BOOL)createTable:(id)a0 withFields:(id)a1 withDBManager:(id)a2;
- (void)clear;
- (void).cxx_destruct;

@end
