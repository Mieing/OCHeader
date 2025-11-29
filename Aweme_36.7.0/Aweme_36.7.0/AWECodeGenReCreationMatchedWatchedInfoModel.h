@interface AWECodeGenReCreationMatchedWatchedInfoModel : AWEBaseDataModel

@property (nonatomic) long long watchedEpisode;
@property (nonatomic) long long watchedItem;
@property (nonatomic) long long watchedTime;
@property (nonatomic) long long watchedProgress;

+ (id)JSONKeyPathsByPropertyKey;

@end
