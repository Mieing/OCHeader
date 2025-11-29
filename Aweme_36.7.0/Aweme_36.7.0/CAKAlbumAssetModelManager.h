@class CAKAlbumAssetModelProvider, PHFetchResult;

@interface CAKAlbumAssetModelManager : NSObject

@property (weak, nonatomic) CAKAlbumAssetModelProvider *assetModelProvider;
@property (retain, nonatomic) PHFetchResult *fetchResult;

+ (id)createWithPHFetchResult:(id)a0 provider:(id)a1;

- (id)objectIndex:(long long)a0;
- (id)assetModelForPhAsset:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (long long)indexOfObject:(id)a0;

@end
