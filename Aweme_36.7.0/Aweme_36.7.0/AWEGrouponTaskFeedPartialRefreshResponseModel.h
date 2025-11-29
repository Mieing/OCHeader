@class NSArray;

@interface AWEGrouponTaskFeedPartialRefreshResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *feedUpdateInfoList;

+ (id)feedUpdateInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
