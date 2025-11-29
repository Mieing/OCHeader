@class NSArray;

@interface AWECodeGenV2PlayControlClaBatchSubtitlesResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *claInfosModelArray;
@property (copy, nonatomic) NSArray *errReasonsModelArray;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
