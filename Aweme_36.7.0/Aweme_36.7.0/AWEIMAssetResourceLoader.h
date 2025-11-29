@class NSString, AWEIMPhotoAlbumAssetLoadStateObj;

@interface AWEIMAssetResourceLoader : NSObject <IESIMAssetLoaderProtocol>

@property (nonatomic) BOOL loadAsLivePhoto;
@property (nonatomic) long long loadStrategy;
@property (retain, nonatomic) AWEIMPhotoAlbumAssetLoadStateObj *loadedResult;
@property (copy, nonatomic) id /* block */ icloudCallback;
@property (copy, nonatomic) NSString *identifier;

- (void)loadAsset:(id)a0 strategy:(long long)a1 loadAsLivePhoto:(BOOL)a2 iCloudStart:(id /* block */)a3 complete:(id /* block */)a4;
- (void)fetchSpeedFirstUsingNetworkByIdentifier:(id)a0 complete:(id /* block */)a1;
- (void)fetchQualityFirstUsingNetworkByIdentifier:(id)a0 complete:(id /* block */)a1;
- (id)IMAssetLoaderTokenCert;
- (void)invokeIcloudCallBackIfneedWithAsset:(id)a0;
- (BOOL)sendAsLivePhoto:(id)a0;
- (void)handleRequestResultURLAsset:(id)a0 info:(id)a1 asset:(id)a2 complete:(id /* block */)a3;
- (void)fetchLivePhotoResourceUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (void)fetchSlowMotionResouceUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (void)fetchHighQulityAVAssetUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (void)handleRequestHighQualityWithImageData:(id)a0 asset:(id)a1 info:(id)a2;
- (void)fetchHighQualityImageUsingNetworkByAsset:(id)a0 complete:(id /* block */)a1;
- (void)setVideoCoverImageFromAsset:(id)a0 videoAsset:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 complete:(id /* block */)a3;
- (void)handleRequestResultCoverImage:(id)a0 info:(id)a1 isDegreed:(BOOL)a2 asset:(id)a3;
- (void)loadAsset:(id)a0 strategy:(long long)a1 iCloudStart:(id /* block */)a2 complete:(id /* block */)a3;
- (void).cxx_destruct;

@end
