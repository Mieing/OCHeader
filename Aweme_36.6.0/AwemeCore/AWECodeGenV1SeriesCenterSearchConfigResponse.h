@class NSArray;

@interface AWECodeGenV1SeriesCenterSearchConfigResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *contentTypeConfigListModelArray;
@property (copy, nonatomic) NSArray *paidTypeConfigListModelArray;
@property (copy, nonatomic) NSArray *actorsConfigListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
