@class StrategyTable;

@interface ReportIdKeyResp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) unsigned int genstgver;
@property (nonatomic) unsigned int clistgver;
@property (retain, nonatomic) StrategyTable *genstgtable;
@property (retain, nonatomic) StrategyTable *clistgtable;
@property (nonatomic) unsigned int datavalidtime;
@property (nonatomic) unsigned int banreporttime;
@property (nonatomic) unsigned int pollingtime;

+ (void)initialize;

@end
