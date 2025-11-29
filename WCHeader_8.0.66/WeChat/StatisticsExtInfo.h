@class StatisticsBrandVideoAdInfo, StatisticsAppInfo, StatisticsSnsAdInfo;

@interface StatisticsExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) StatisticsSnsAdInfo *snsAdInfo;
@property (retain, nonatomic) StatisticsBrandVideoAdInfo *brandVideoAdInfo;
@property (retain, nonatomic) StatisticsAppInfo *sourceAppInfo;

+ (void)initialize;

- (void)setSourceAppInfo:(id)a0;
- (id)sourceAppInfo;
- (void)setBrandVideoAdInfo:(id)a0;
- (id)brandVideoAdInfo;
- (void)setSnsAdInfo:(id)a0;
- (id)snsAdInfo;

@end
