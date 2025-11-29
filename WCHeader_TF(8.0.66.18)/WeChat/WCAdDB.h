@class WCTDatabase, WCTTable;

@interface WCAdDB : NSObject

@property (retain, nonatomic) WCTDatabase *adDB;
@property (retain, nonatomic) WCTTable *pullRecordTable;

- (void)savePullRecordInfo:(id)a0 sessionKey:(id)a1 isAsync:(BOOL)a2;
- (void)setPullRecordInvalid:(id)a0 isAsync:(BOOL)a1 snsId:(id)a2;
- (id)fetchPullRecordList:(unsigned int)a0;
- (void)cleanPullRecordInfo;
- (id)init;
- (void)dealloc;
- (void)initDB;
- (void)createTables;
- (void)createPullRecordTable;
- (id)getWCDBPath;
- (void).cxx_destruct;

@end
