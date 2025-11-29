@class NSArray;

@interface AWECodeGenV1WannaCardResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *cardListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
