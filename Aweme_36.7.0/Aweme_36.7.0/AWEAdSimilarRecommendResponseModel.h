@class NSString, AWEAwemeResponseModel;

@interface AWEAdSimilarRecommendResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeResponseModel *response;
@property (copy, nonatomic) NSString *recommendTitle;

+ (id)responseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
