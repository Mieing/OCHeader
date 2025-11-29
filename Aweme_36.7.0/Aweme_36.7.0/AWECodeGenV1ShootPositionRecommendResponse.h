@class NSArray;

@interface AWECodeGenV1ShootPositionRecommendResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *positionListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
