@class NSString;

@interface AWECodeGenWatchedModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *watchedItem;
@property (nonatomic) long long watchedEpisode;
@property (nonatomic) long long watchedTime;
@property (nonatomic) int viewedPercent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
