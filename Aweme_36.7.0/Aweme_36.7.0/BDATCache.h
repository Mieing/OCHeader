@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface BDATCache : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphoreLock;
}

@property (retain, nonatomic) NSMutableArray *memCahe;

- (void)setupCache;
- (id)cachePathURL;
- (void)appendRecord:(id)a0;
- (id)records;
- (void)save:(id)a0;
- (void).cxx_destruct;
- (void)cleanup;
- (id)init;
- (id)historyRecords;

@end
