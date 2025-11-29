@class NSNumber, NSDictionary;

@interface AWEPaidStreamIAAProductRightModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *fieldType;
@property (copy, nonatomic) NSDictionary *episodeDetails;

+ (id)jsonParsingError;
+ (id)episodeDetailsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
