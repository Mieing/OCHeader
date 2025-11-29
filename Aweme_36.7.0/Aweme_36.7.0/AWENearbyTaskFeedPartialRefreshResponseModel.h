@class NSArray;

@interface AWENearbyTaskFeedPartialRefreshResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *feedUpdateInfoList;

+ (id)feedUpdateInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
