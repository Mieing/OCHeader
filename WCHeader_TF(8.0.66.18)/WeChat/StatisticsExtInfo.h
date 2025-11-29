@class StatisticsBrandVideoAdInfo, StatisticsAppInfo, StatisticsSnsAdInfo;

@interface StatisticsExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) StatisticsSnsAdInfo *snsAdInfo;
@property (retain, nonatomic) StatisticsBrandVideoAdInfo *brandVideoAdInfo;
@property (retain, nonatomic) StatisticsAppInfo *sourceAppInfo;

+ (void)initialize;

@end
