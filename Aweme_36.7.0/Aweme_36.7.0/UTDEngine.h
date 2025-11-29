@class UTDLogUploadManager, UTDCacheManager;

@interface UTDEngine : NSObject {
    UTDLogUploadManager *_uploadManager;
    UTDCacheManager *_cacheManager;
    struct dispatch_queue_s { } *_storeQueue;
}

+ (id)sharedUTDEngine;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)addLog:(id)a0;
- (void)asyncAddLog:(id)a0;
- (BOOL)addUTDLog:(id)a0;
- (void)synchronize;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
