@class NSArray;

@interface AWENearbyTaskFeedPartlyRefreshResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *feedSaasUpdateInfoList;

+ (id)feedSaasUpdateInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
