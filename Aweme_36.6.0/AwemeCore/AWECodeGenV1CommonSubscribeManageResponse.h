@class NSArray;

@interface AWECodeGenV1CommonSubscribeManageResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *serviceAccountListModelArray;
@property (copy, nonatomic) NSArray *serviceAccountListThirdPartyModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
