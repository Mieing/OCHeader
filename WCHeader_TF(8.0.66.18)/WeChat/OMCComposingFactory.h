@interface OMCComposingFactory : NSObject

+ (void)createTimelineWithMCAssets:(id)a0 aspectRatio:(id)a1 imageOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 minSegmentPreservedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 enableHDRPlayback:(BOOL)a4 calcDurationWithAllSegments:(BOOL)a5 videoFrameRateHandler:(id /* block */)a6 postProcHandler:(id /* block */)a7 completionHandler:(id /* block */)a8;
+ (void)createTimelineWithAssetInfos:(id)a0 aspectRatio:(id)a1 imageOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 minSegmentPreservedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 enableHDRPlayback:(BOOL)a4 calcDurationWithAllSegments:(BOOL)a5 videoFrameRateHandler:(id /* block */)a6 postProcHandler:(id /* block */)a7 completionHandler:(id /* block */)a8;
+ (void)_createTimelineWithAKAssets:(const void *)a0 aspectRatio:(id)a1 imageOriginDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 minSegmentPreservedDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 enableHDRPlayback:(BOOL)a4 calcDurationWithAllSegments:(BOOL)a5 videoFrameRateHandler:(id /* block */)a6 postProcHandler:(id /* block */)a7 completionHandler:(id /* block */)a8;
+ (void)_prepareAssets:(id)a0 completion:(id /* block */)a1;
+ (void)prepareMCAssets:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_prepareAssetInfos:(id)a0 completionHandler:(id /* block */)a1;
+ (void)prepareAssetInfos:(id)a0 completionHandler:(id /* block */)a1;
+ (id)assetIDWithPHAsset:(id)a0;
+ (id)assetIDWithMCAsset:(id)a0;
+ (id)assetIDWithMJAssetInfo:(id)a0;
+ (id)_fetchAssetFrameRateInfosFromAssets:(const void *)a0;

@end
