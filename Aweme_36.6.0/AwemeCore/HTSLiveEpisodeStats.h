@class NSString;

@interface HTSLiveEpisodeStats : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *upRightStatsStr;

+ (id)descriptor;

@end
