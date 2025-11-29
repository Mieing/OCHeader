@class PHAssetCollection, PHFetchResult, CAKAlbumAssetCacheKey;

@interface CAKAlbumThumbnailPrefetcherInputData : NSObject

@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) unsigned long long resourceType;
@property (readonly, nonatomic) long long sortStyle;
@property (readonly, nonatomic) CAKAlbumAssetCacheKey *assetCacheKey;

- (id)initWithAssetCollection:(id)a0 fetchResult:(id)a1 ascending:(BOOL)a2 resourceType:(unsigned long long)a3 sortStyle:(long long)a4;
- (void)cleanCacheKey;
- (void).cxx_destruct;

@end
