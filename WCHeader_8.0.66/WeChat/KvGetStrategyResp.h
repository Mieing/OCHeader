@class StrategyTable;

@interface KvGetStrategyResp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) unsigned int genstgver;
@property (nonatomic) unsigned int clistgver;
@property (nonatomic) unsigned int uinstgver;
@property (retain, nonatomic) StrategyTable *genstgtable;
@property (retain, nonatomic) StrategyTable *clistgtable;
@property (retain, nonatomic) StrategyTable *uinstgtable;
@property (nonatomic) unsigned int datavalidtime;
@property (nonatomic) unsigned int pollingtime;

+ (void)initialize;

@end
