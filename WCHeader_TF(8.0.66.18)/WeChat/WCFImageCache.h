@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface WCFImageCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSCache *memoryCache;
@property (readonly, nonatomic) BOOL isHighEnd;

- (id)init;
- (id)realKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)pathForKey:(id)a0;
- (void)setCostLimit:(long long)a0;
- (void)storeImage:(id)a0 forKey:(id)a1;
- (void)clear;
- (void)clearMemory;
- (void)storeImage:(id)a0 forKey:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)imageForKey:(id)a0;
- (id)imageFromMemoryForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)imageDataFromDiskForKey:(id)a0;
- (void)removeDiskImageForKey:(id)a0;
- (void)callCompletion:(id /* block */)a0 image:(id)a1 data:(id)a2 type:(long long)a3;
- (id)queryImageForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 options:(long long)a2 cacheType:(long long)a3 completion:(id /* block */)a4;
- (id)queryImagesExistsByKeys:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
