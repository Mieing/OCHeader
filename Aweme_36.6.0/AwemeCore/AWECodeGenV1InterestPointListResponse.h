@class NSArray;

@interface AWECodeGenV1InterestPointListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *interestPointsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
