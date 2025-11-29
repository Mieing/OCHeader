@class NSString, NPRecommendReframe, AWEAssetModel;

@interface ACCMomentMaterialSegInfo : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (copy, nonatomic) NSString *fragmentId;
@property (copy, nonatomic) NSString *materialId;
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (retain, nonatomic) NPRecommendReframe *clipFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clipFrameJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithSegInfo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
