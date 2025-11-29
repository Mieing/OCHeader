@class WCTDatabase, WCTTable;

@interface MagicPkgInfoDBMgr : NSObject

@property (retain, nonatomic) WCTDatabase *db;
@property (retain, nonatomic) WCTTable *pkgInfoTable;

+ (id)MagicPkgInfoDBPath;

- (id)init;
- (void)initDB;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)insertPkgUpdateInfo:(id)a0;
- (id)getMagicPkgList;
- (id)getPkgUpdateInfo:(id)a0;
- (void)removePkgInfo:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
