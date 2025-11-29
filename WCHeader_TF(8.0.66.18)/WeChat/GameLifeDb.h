@class WCTDatabase, WCTTable;

@interface GameLifeDb : NSObject

@property (retain, nonatomic) WCTDatabase *dataBase;
@property (retain, nonatomic) WCTTable *gameLifeContactTable;
@property (retain, nonatomic) WCTTable *gameLifeSessionInfoTable;

- (id)init;
- (void)dealloc;
- (void)setupDbBase;
- (void)testClearDB;
- (id)getDbPath;
- (BOOL)createGameLifeContactTable;
- (BOOL)createGameLifeSessionInfoTable;
- (id)createTableWithTableName:(id)a0 objectClass:(Class)a1;
- (id)getContactTable;
- (id)getSessionInfoTable;
- (void).cxx_destruct;

@end
