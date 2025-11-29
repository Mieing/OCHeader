@class WCTDatabase, WCTTable;

@interface UDRResourceDBMgr : NSObject

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *resourceTable;

+ (id)UDRResourceDBPath;

- (id)init;
- (void)initDB;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)insertResourceInfo:(id)a0;
- (id)getAllResource;
- (id)getResourceList:(id)a0;
- (id)getResourceInfo:(id)a0;
- (void)removeResourceInfo:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
