@interface AWECodeGenContentStatisModel : AWEBaseDataModel

@property (nonatomic) long long updatedToEpisode;
@property (nonatomic) long long totalEpisode;
@property (nonatomic) long long varietyShowPeriod;
@property (nonatomic) BOOL varietyShowFinish;

+ (id)JSONKeyPathsByPropertyKey;

@end
