@class AWEStorageFilePermanent;

@interface AWEOfflineImageCache : NSObject

@property (retain, nonatomic) AWEStorageFilePermanent *filePermanent;

+ (id)sharedInstance;

- (void)loadImageFromNetworkWithImageView:(id)a0 cacheKey:(id)a1 originURLList:(id)a2 cacheName:(id)a3;
- (void)loadImageWithImageView:(id)a0 cacheKey:(id)a1 originURLList:(id)a2 cacheName:(id)a3;
- (void)removeImageCacheWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
