@class NSString;

@interface BUDBTable : NSObject {
    struct sqlite3 { } *_handler;
}

@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSString *path;

- (void)_pbu_logWithCurrentQueueWithSel:(SEL)a0;
- (void)_pbu_table_errorlogWithSql:(id)a0 errorMsg:(id)a1;
- (BOOL)_clostDB;
- (id)_orderBy:(struct { int x0; char *x1; })a0;
- (id)_limit:(struct { int x0; int x1; })a0;
- (id)initWithDatabasePath:(id)a0 tableName:(id)a1 sqlite:(struct sqlite3 { } *)a2;
- (BOOL)update:(id)a0 where:(id)a1;
- (id)selectWithWhere:(id)a0 orderBy:(struct { int x0; char *x1; })a1 limit:(struct { int x0; int x1; })a2 modelClass:(Class)a3;
- (long long)selectAllCount;
- (BOOL)deleteWithWhere:(id)a0;
- (BOOL)updateWithSqlString:(id)a0 where:(id)a1;
- (BOOL)deleteAll;
- (void).cxx_destruct;
- (BOOL)_openDB;
- (BOOL)insert:(id)a0;

@end
