@class NSArray;

@interface AWECodeGenV1MultiGenPicFromTextResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *genImageInfoListModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
