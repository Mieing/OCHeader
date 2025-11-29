@class TPLocalCache, NSRecursiveLock;

@interface TPDiskReadWrite : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) TPLocalCache *localCache;

- (id)initWithName:(id)a0;
- (void)writeToFile:(id)a0 value:(id)a1;
- (id)readAll;
- (id)readAllAndRemove;
- (void)remove:(id)a0;
- (void)removeAll;
- (id)readReportKey;
- (id)readAllKeys;
- (id)read:(id)a0;
- (void).cxx_destruct;

@end
