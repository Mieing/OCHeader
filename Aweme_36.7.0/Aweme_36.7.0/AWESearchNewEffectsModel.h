@class NSArray;

@interface AWESearchNewEffectsModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *effectsDetailArray;
@property (copy, nonatomic) NSArray *effectsVideoArray;

+ (id)effectsDetailArrayJSONTransformer;
+ (id)effectsVideoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
