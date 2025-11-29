@class WCTDatabase, WCTTable;

@interface ForwardMsgSpamDb : NSObject

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *table;

- (BOOL)initDb;
- (void)closeDb;
- (id)getDbPath;
- (BOOL)createTable;
- (id)queryByMsgId:(id)a0;
- (BOOL)saveToDb:(id)a0;
- (void).cxx_destruct;

@end
