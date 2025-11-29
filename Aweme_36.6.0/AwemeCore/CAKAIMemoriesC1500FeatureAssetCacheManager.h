@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CAKAIMemoriesC1500FeatureAssetCacheManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *filterAssetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkC1500AssetQueue;
@property (retain, nonatomic) NSMutableArray *filteredAssetIDs;
@property (nonatomic) long long maxFilteredAssetCount;
@property (nonatomic) long long unsavedCount;

+ (id)sharedInstance;

- (id)getValidFilteredAssets;
- (void)refreshValidAsset;
- (BOOL)isValidAssetCountEnough;
- (id)getUploadC1500AssetNotCheckAssetIDList;
- (void)updateUploadC1500NotCheckAssetIDStatus:(id)a0;
- (void)saveUploadC1500NotCheckAssetIDList:(id)a0;
- (id)p_uploadC1500NotCheckAssetIDKeyForCurrentUser;
- (id)p_getUploadC1500AssetNotCheckAssetIDList;
- (id)p_uploadC1500CheckAssetIDStatusMapKey;
- (long long)filteredAssetIDsCount;
- (id)checkStatusForAssetIDList:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)saveState;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)addAsset:(id)a0;

@end
