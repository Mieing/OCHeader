@class NSDate;

@interface lzCacheCleanManager : NSObject {
    NSDate *_lastCleanDate;
}

- (id)init;
- (void)dealloc;
- (void)cleanCache:(id)a0 filterBlock:(id /* block */)a1 queue:(id)a2;
- (void)removeFiles:(id)a0 cacheMgr:(id)a1;
- (BOOL)isFileCaching:(id)a0 cacheMgr:(id)a1;
- (id)scanCachePath:(id)a0;
- (BOOL)isExpFile:(id)a0;
- (void).cxx_destruct;

@end
