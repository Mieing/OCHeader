@class NSArray;

@interface AWEDanmakuActivityConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *pendants;
@property (copy, nonatomic) NSArray *eggs;
@property (copy, nonatomic) NSArray *guideDanmakus;

+ (id)propertyToModelClassInArrayMap;
+ (id)pendantsJSONTransformer;
+ (id)eggsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)downloadResourcesModels;
- (void).cxx_destruct;

@end
