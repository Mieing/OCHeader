@class NSArray;

@interface AWECodeGenV1CommonSubscribeGetResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *serviceAccountListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
