@class NSArray;

@interface AWECodeGenV1FormatInputResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *formattedOutputListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
