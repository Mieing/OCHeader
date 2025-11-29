@class NSArray, NSDictionary, NSMutableDictionary, NSDate;

@interface AWEIMPhotoAlbumLoader : NSObject

@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSDictionary *livePhotoIDs;
@property (retain, nonatomic) NSMutableDictionary *loadStatusObjs;
@property (nonatomic) long long iCloudAssetCount;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL enableLowQualityEarlyReturn;

- (BOOL)allTaskFinished;
- (void)loadAssets:(id)a0 livePhotoIDs:(id)a1 iCloudCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)loadAssets:(id)a0 iCloudCallback:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchSlowMotionResouceUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (void)fetchHighQulityAVAssetUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (void)fetchLivePhotoResouceUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (id)livePhotoRequestOptions;
- (void)handleRequestResultURLAsset:(id)a0 info:(id)a1 asset:(id)a2 requestDate:(id)a3;
- (void)handleRequestWithAsset:(id)a0 imageData:(id)a1 info:(id)a2 assetIdentifier:(id)a3;
- (void)checkAllFinished;
- (void)loadAssets:(id)a0 enableLowQualityEarlyReturn:(BOOL)a1 iCloudCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)loadAssets:(id)a0 enableLowQualityEarlyReturn:(BOOL)a1 livePhotoIDs:(id)a2 iCloudCallback:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fetchOpportunisticQulityImageUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (void)handleRequestResultImage:(id)a0 info:(id)a1 assetIdentifier:(id)a2 isVideoAsset:(BOOL)a3 asset:(id)a4;
- (void).cxx_destruct;

@end
