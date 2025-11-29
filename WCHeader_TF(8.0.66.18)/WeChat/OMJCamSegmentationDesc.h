@class OMJAssetInfo;

@interface OMJCamSegmentationDesc : NSObject

@property (readonly, nonatomic) long long backgroundType;
@property (readonly, nonatomic) float blurIntensity;
@property (readonly, nonatomic) OMJAssetInfo *assetInfo;

+ (id)segmentationDescWithBlurIntensity:(float)a0;
+ (id)segmentationDescWithAssetInfo:(id)a0;
+ (id)segmentationDesc;

- (id)initWithBackgroundType:(long long)a0 blurIntensity:(float)a1 assetInfo:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
