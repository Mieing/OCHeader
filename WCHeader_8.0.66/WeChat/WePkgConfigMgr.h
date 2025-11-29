@class WCTDatabase, WCTTable;

@interface WePkgConfigMgr : MMObject

@property (retain) WCTDatabase *db;
@property (retain) WCTTable *tablePkgRegularConfig;
@property (retain) WCTTable *tablePkgUpdateConfig;
@property (retain) WCTTable *tablePkgGlobalConfig;
@property (retain) WCTTable *tablePkgNonAtomicSingleFileConfig;

- (void)openDB;
- (void)closeDB;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (unsigned int)getLastCheckUpdateTimestamp:(id)a0;
- (BOOL)updateLastCheckUpdateTimestamp:(id)a0;
- (BOOL)updateLastCheckUpdateVersion:(id)a0 Version:(id)a1;
- (id)getLastCheckUpdateVersion:(id)a0;
- (BOOL)insertOrUpdateRegularConfig:(id)a0;
- (id)getRegularConfigByPkgId:(id)a0;
- (BOOL)deleteRegularConfigByPkgId:(id)a0;
- (id)getAllRegularConfigs;
- (BOOL)insertOrUpdateUpdateConfig:(id)a0;
- (id)getUpdateConfigByPkgId:(id)a0;
- (BOOL)deleteUpdateConfigByPkgId:(id)a0;
- (id)getAllUpdateConfig;
- (BOOL)haveUpdateConfigFor:(id)a0;
- (id)getNonAtomicSingFileConfigByPkgId:(id)a0;
- (BOOL)insertOrUpdateNonAtomicSingFileConfig:(id)a0;
- (BOOL)deleteNonAtomicSingleFileConfigByPkgId:(id)a0;
- (id)getAllNonAtomicSingFileConfig;
- (id)getRegularConfigListByAppid:(id)a0;
- (void)reportDBFail:(id)a0 Version:(id)a1 Reason:(id)a2;
- (void).cxx_destruct;

@end
