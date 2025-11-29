@class NSArray;

@interface AWEScreenCastResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *castVideoInfos;

+ (id)castVideoInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
