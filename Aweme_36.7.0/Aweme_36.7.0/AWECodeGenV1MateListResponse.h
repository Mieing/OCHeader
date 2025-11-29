@class NSArray;

@interface AWECodeGenV1MateListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *userListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
