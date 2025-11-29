@interface AWEAssetValidChecker : NSObject

+ (long long)videoSelectableMinSeconds;
+ (double)minVideoRatio;
+ (double)maxVideoRatio;
+ (long long)minAssetsSelectionCount;
+ (long long)maxAssetsSelectionCount;
+ (BOOL)validAssetModelForPhoto:(id)a0;
+ (BOOL)validNewClipsAssetModelForVideo:(id)a0;
+ (BOOL)validResolutionAssetModelForVideo:(id)a0;
+ (BOOL)validNewClipsAssetModelForDuration:(double)a0;
+ (BOOL)validResolutionAVAssetModelForVideo:(id)a0;
+ (struct CGSize { double x0; double x1; })captureVideoNaturalSizeWithVideo:(id)a0;
+ (long long)captureVideoOrientationWithVideo:(id)a0;
+ (BOOL)validAIClipsAssetModelForVideo:(id)a0;
+ (long long)videoSelectableMaxSeconds;
+ (long long)videoResolution;

@end
