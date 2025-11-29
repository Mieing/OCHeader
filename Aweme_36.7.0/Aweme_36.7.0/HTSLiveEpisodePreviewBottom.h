@class NSString;

@interface HTSLiveEpisodePreviewBottom : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *watchPeriodStr;
@property (copy, nonatomic) NSString *latestPeriodStr;

+ (id)descriptor;

@end
