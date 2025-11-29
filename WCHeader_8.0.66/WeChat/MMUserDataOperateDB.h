@class WCTDatabase, NSString, WCTTable;

@interface MMUserDataOperateDB : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCTDatabase *m_database;
@property (retain, nonatomic) WCTTable *m_userDataOperateItemTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)reloadDataBase;
- (void)createTables;
- (BOOL)createUserDataOperateItemTable;
- (void)closeDB;
- (void)insertUserDataOperateItemList:(id)a0;
- (BOOL)insertUserDataOperateItem:(id)a0 withHandle:(id)a1;
- (id)getEarliestUserDataOperate;
- (id)getBatchUploadUserDataListWithBeginTime:(unsigned long long)a0 andEndTime:(unsigned long long)a1 arrCombineReportForUserDataType:(id)a2;
- (BOOL)removeUserDataOperateWithBeginTime:(unsigned long long)a0 andEndTime:(unsigned long long)a1;
- (id)databasePath;
- (void)didRecoverDatabase;
- (void)willRecoverDatabase;
- (void).cxx_destruct;

@end
