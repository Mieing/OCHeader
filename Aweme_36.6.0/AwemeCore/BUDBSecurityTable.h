@class NSObject;
@protocol OS_dispatch_queue;

@interface BUDBSecurityTable : BUDBTable

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_defaultQueue;

- (void)insert:(id)a0 callback:(id /* block */)a1;
- (void)update:(id)a0 where:(id)a1 callback:(id /* block */)a2;
- (void)selectWithWhere:(id)a0 orderBy:(struct { int x0; char *x1; })a1 limit:(struct { int x0; int x1; })a2 modleClass:(Class)a3 callback:(id /* block */)a4;
- (void)deleteWithWhere:(id)a0 callback:(id /* block */)a1;
- (id)initWithDatabasePath:(id)a0 tableName:(id)a1 sqlite:(struct sqlite3 { } *)a2;
- (BOOL)update:(id)a0 where:(id)a1;
- (id)selectWithWhere:(id)a0 orderBy:(struct { int x0; char *x1; })a1 limit:(struct { int x0; int x1; })a2 modelClass:(Class)a3;
- (long long)selectAllCount;
- (BOOL)deleteWithWhere:(id)a0;
- (BOOL)updateWithSqlString:(id)a0 where:(id)a1;
- (BOOL)deleteAll;
- (void).cxx_destruct;
- (BOOL)insert:(id)a0;

@end
