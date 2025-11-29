@class YYDiskCache, NSDictionary;

@interface AWEHotSpotDynamicImageManager : NSObject

@property (retain, nonatomic) YYDiskCache *diskCache;
@property (copy, nonatomic) NSDictionary *cachedDictionary;

- (BOOL)p_isEqualDictionary:(id)a0 toDictionary:(id)a1;
- (void)p_startImageDownloadWithURL:(id)a0;
- (void)cleanDynamicCache;
- (void)loadWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)imageInfo;

@end
