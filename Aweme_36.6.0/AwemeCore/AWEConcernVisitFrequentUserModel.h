@class NSString, AWESimpleUserModel;

@interface AWEConcernVisitFrequentUserModel : AWEBaseApiModel

@property (retain, nonatomic) AWESimpleUserModel *userModel;
@property (nonatomic) long long unwatchedCount;
@property (nonatomic) double latestItemPublishTime;
@property (nonatomic) BOOL isEpisode;
@property (copy, nonatomic) NSString *episodeExtraInfo;

+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)episodeModel;
- (void).cxx_destruct;

@end
