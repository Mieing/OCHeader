@class NSArray;

@interface AWEAdSearchMiddlePageResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *models;

+ (id)modelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
