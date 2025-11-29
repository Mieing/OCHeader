@interface MJPHAssetsAnalyzer : NSObject

@property (nonatomic) BOOL isAssetEdited;
@property (nonatomic) BOOL isScreedshotAsset;
@property (nonatomic) long long realShotAssetCount;
@property (nonatomic) long long totalAssetCount;

- (id)init;
- (void)dealloc;
- (void)initImpl;
- (void)analyzeWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeWithOriginAssets:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)checkAssetEditingFlagWithAssets:(id)a0;
- (void)analyzeMetadataWithPHAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeImageWithPHAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)analyzeVideoWithPHAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleSuccessWithResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleFailWithCompletionHandler:(id /* block */)a0;

@end
