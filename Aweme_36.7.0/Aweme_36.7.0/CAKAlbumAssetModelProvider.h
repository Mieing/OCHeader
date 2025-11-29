@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface CAKAlbumAssetModelProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *sourceAssetDic;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sourceDicSemaphore;

- (id)assetModelForPhAsset:(id)a0;
- (id)p_createAssetModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
