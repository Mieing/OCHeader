@class NSCache, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WCFinderImageCacheMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue;
@property (retain, nonatomic) NSCache *playerThumbCache;
@property (retain, nonatomic) NSCache *headerImgCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;
- (void)storeImage:(id)a0 forKey:(id)a1;
- (id)imageFromCacheForKey:(id)a0;
- (id)imageFromMemoryForKey:(id)a0;
- (id)imageFromDiskForPath:(id)a0;
- (void)asyncGetImageFromDiskForPath:(id)a0 complection:(id /* block */)a1;
- (id)thumbForTid:(id)a0;
- (void)setThumb:(id)a0 forTid:(id)a1;
- (void)removeThumbForTid:(id)a0;
- (void)storeHeaderImage:(id)a0 forKey:(id)a1;
- (void)asyncGetHeaderImageFromCacheForKey:(id)a0 complection:(id /* block */)a1;
- (id)cachedFileNameForKey:(id)a0;
- (void).cxx_destruct;

@end
