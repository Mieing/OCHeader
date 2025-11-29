@class NSString;

@interface BUDatabase : NSObject {
    struct sqlite3 { } *_handler;
}

@property (copy, nonatomic) NSString *path;

+ (id)_databaseCachedWithName:(id)a0;
+ (id)_tablePathWithName:(id)a0;
+ (void)_cacheDatabase:(id)a0 withName:(id)a1;
+ (id)databaseWithName:(id)a0;
+ (id)_databases;
+ (id)rootPath;

- (BOOL)_clostDB;
- (id)_addDefaultFields:(id)a0;
- (BOOL)_checkAndInsertColumnWithField:(id)a0 inTableNamed:(id)a1;
- (id)selectTableWithName:(id)a0;
- (BOOL)createTableIfNeededWithName:(id)a0 fields:(id)a1;
- (id)selectTableWithName:(id)a0 security:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)_openDB;

@end
