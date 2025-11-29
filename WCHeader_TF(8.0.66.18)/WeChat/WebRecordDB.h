@class WCTDatabase, WCTTable;

@interface WebRecordDB : MMObject

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *webRecordTable;

- (BOOL)initDB;
- (void)closeDB;
- (BOOL)db_DeleteAllRecord;
- (unsigned int)db_GetRecordCount;
- (id)db_GetAllRecordInfoData;
- (id)db_GetRecordInfoDataByUrl:(id)a0;
- (BOOL)db_InsertOrUpdateRecordInfoData:(id)a0;
- (void)deleteRedundent;
- (BOOL)db_DeleteRecordInfoDataByUrl:(id)a0;
- (BOOL)db_tryDeleteOutOfDateLink;
- (void).cxx_destruct;

@end
