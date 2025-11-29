@class WCTDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface AWEStudioPersistentLogDB : NSObject

@property (class, readonly, nonatomic) AWEStudioPersistentLogDB *shared;

@property (readonly, nonatomic) WCTDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)insertLogs:(id)a0;
- (void)p_prepare;
- (void)insertLog:(id)a0;
- (void)serialAsync:(id /* block */)a0;
- (void)buildDBIfNeeded;
- (void)trackWithError:(id)a0 type:(id)a1;
- (struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })wcdb_selectCondition;
- (struct Order { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; })wcdb_order;
- (void)deleteLogsWithIndexes:(id)a0;
- (id)databaseFolderName;
- (void)trackWithError:(id)a0 type:(id)a1 info:(id)a2;
- (void)fetchCurrentUserLogs:(id /* block */)a0;
- (void)deleteLogWithIndex:(long long)a0;
- (id)databasePath;
- (void).cxx_destruct;
- (id)tableName;
- (BOOL)createTable:(id)a0 error:(id *)a1;

@end
