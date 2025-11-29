@class NSArray;

@interface AWELiveNearbyLinkerUsers : AWEBaseApiModel

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSArray *userInfos;

+ (id)userInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
