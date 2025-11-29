@class NSString, FMDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface FMDatabaseQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMDatabase *db;
@property (retain) NSString *path;
@property (readonly) int openFlags;
@property (copy) NSString *vfsName;

+ (id)databaseQueueWithPath:(id)a0;
+ (id)databaseQueueWithURL:(id)a0;
+ (id)databaseQueueWithPath:(id)a0 flags:(int)a1;
+ (id)databaseQueueWithURL:(id)a0 flags:(int)a1;
+ (Class)databaseClass;

- (void)close;
- (id)initWithPath:(id)a0;
- (void)inExclusiveTransaction:(id /* block */)a0;
- (void)interrupt;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)database;
- (id)init;
- (void)inTransaction:(id /* block */)a0;
- (void)dealloc;
- (id)inSavePoint:(id /* block */)a0;
- (BOOL)checkpoint:(int)a0 error:(id *)a1;
- (BOOL)checkpoint:(int)a0 name:(id)a1 error:(id *)a2;
- (BOOL)checkpoint:(int)a0 name:(id)a1 logFrameCount:(int *)a2 checkpointCount:(int *)a3 error:(id *)a4;
- (id)initWithURL:(id)a0 flags:(int)a1 vfs:(id)a2;
- (id)initWithPath:(id)a0 flags:(int)a1 vfs:(id)a2;
- (id)initWithPath:(id)a0 flags:(int)a1;
- (id)initWithURL:(id)a0 flags:(int)a1;
- (void)inDatabase:(id /* block */)a0;
- (void)beginTransaction:(long long)a0 withBlock:(id /* block */)a1;
- (void)inDeferredTransaction:(id /* block */)a0;
- (void)inImmediateTransaction:(id /* block */)a0;

@end
