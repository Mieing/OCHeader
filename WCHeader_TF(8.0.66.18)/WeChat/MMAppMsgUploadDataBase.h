@class WCTDatabase, WCTTable;

@interface MMAppMsgUploadDataBase : MMObject

@property (retain, nonatomic) WCTDatabase *database;
@property (retain, nonatomic) WCTTable *uploadfileTable;

- (id)init;
- (void)reloadDatabase;
- (void)createTables;
- (void)dealloc;
- (BOOL)tryCleanData;
- (id)createTableWithName:(id)a0 objectClass:(Class)a1;
- (BOOL)updateAMUItemInDB:(id)a0;
- (BOOL)deleteAMUItemInDB:(id)a0;
- (BOOL)deleteAllItemForUser:(id)a0;
- (BOOL)deleteAMUItemForMsg:(id)a0;
- (id)getAMUItem:(unsigned int)a0;
- (id)MMAppMsgUploadRootDir;
- (id)MMAppMsgUploadDBPath;
- (void).cxx_destruct;

@end
