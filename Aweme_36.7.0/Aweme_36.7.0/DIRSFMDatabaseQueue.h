@class NSString, DIRSFMDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface DIRSFMDatabaseQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    DIRSFMDatabase *_db;
}

@property (retain) NSString *path;
@property (readonly) int openFlags;

+ (id)databaseQueueWithPath:(id)a0;
+ (id)databaseQueueWithPath:(id)a0 flags:(int)a1;
+ (Class)databaseClass;

- (void)close;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)database;
- (id)init;
- (void)inTransaction:(id /* block */)a0;
- (void)dealloc;
- (id)inSavePoint:(id /* block */)a0;
- (id)initWithPath:(id)a0 flags:(int)a1 vfs:(id)a2;
- (id)initWithPath:(id)a0 flags:(int)a1;
- (void)inDatabase:(id /* block */)a0;
- (void)beginTransaction:(BOOL)a0 withBlock:(id /* block */)a1;
- (void)inDeferredTransaction:(id /* block */)a0;

@end
