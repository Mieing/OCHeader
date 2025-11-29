@class NSArray, AWETeenDiscoverBlockModel;

@interface AWETeenDiscoverRecentWatchedResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWETeenDiscoverBlockModel *recentWatch;
@property (copy, nonatomic) NSArray *ageDesc;

+ (id)recentWatchJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
