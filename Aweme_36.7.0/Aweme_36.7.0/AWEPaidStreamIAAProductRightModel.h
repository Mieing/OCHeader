@class NSDictionary;

@interface AWEPaidStreamIAAProductRightModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *episodeDetails;

+ (id)jsonParsingError;
+ (id)episodeDetailsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
