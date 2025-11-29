@class NSString;

@interface AWEFollowFeedStatsResponse : AWEBaseApiModel

@property (nonatomic) BOOL sortHasMore;
@property (copy, nonatomic) NSString *itemIDs;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isDemotion;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
