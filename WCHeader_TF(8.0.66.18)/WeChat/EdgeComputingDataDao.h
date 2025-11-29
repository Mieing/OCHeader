@class NSString, NSArray, EdgeComputingWCDBManager;

@interface EdgeComputingDataDao : MMObject {
    NSString *configID;
    NSArray *fieldConfigModels;
    EdgeComputingWCDBManager *dbManager;
}

- (id)init:(id)a0 withFieldConfigModels:(id)a1;
- (void)dealloc;
- (BOOL)checkTableExist;
- (BOOL)createTable;
- (BOOL)createIndex;
- (void)updateTable;
- (BOOL)dropTable;
- (BOOL)insertPatch:(id)a0;
- (BOOL)insert:(id)a0;
- (BOOL)deleteExpire:(unsigned long long)a0;
- (unsigned long long)queryRowNum;
- (BOOL)checkColumnExist:(id)a0;
- (id)getDBFieldType:(unsigned int)a0;
- (id)getDBFieldName:(id)a0;
- (id)getDBTableName:(id)a0;
- (id)getAndCheckEdgeDBPath;
- (void).cxx_destruct;

@end
