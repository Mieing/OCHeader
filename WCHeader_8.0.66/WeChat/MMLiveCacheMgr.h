@class NSCache, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MMLiveCacheMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageIOQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)imageFromCacheForKey:(id)a0;
- (void)cacheImage:(id)a0 forKey:(id)a1;
- (void)removeImageCacheForKey:(id)a0;
- (void)precacheImageForKey:(id)a0 path:(id)a1;
- (void)precacheImageForKey:(id)a0 path:(id)a1 complection:(id /* block */)a2;
- (void)asyncLoadImageFromDiskForPath:(id)a0 complection:(id /* block */)a1;
- (void)precacheImageAsyncWithLiveTask:(id)a0;
- (void).cxx_destruct;

@end
