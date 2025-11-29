@interface ACCAssetUtils : NSObject

+ (BOOL)enableNetworkUrlOptimizeWithVideoAsset:(id)a0;
+ (double)durationWithVideoAsset:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeWithVideoAsset:(id)a0;
+ (double)fpsWithVideoAsset:(id)a0;
+ (double)bitrateWithVideoAsset:(id)a0;
+ (void)updateNetworkVideoAssetCacheIfNeeded:(id)a0;

@end
