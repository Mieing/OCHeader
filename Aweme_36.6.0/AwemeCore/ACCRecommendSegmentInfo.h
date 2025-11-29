@class NSString, ACCMVReframe, AWEAssetModel;

@interface ACCRecommendSegmentInfo : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (copy, nonatomic) NSString *materialID;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *segmentID;
@property (retain, nonatomic) ACCMVReframe *cropCxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bboxJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cropPoints;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
