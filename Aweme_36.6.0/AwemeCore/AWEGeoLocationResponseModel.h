@class NSArray;

@interface AWEGeoLocationResponseModel : ACCBaseApiModel

@property (copy, nonatomic) NSArray *results;

+ (id)resultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
