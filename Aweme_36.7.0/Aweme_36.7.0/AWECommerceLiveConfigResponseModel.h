@class NSArray;

@interface AWECommerceLiveConfigResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *configModels;

+ (id)configModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
