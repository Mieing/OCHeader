@class BDImageCacheConfig;

@interface BDLargeImageMemoryCacheControl : NSObject

@property (retain, nonatomic) BDImageCacheConfig *separatedMemoryCacheConfig;
@property (nonatomic) unsigned long long largeImageMemoryLimit;

- (void).cxx_destruct;
- (id)init;

@end
