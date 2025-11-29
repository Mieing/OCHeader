@class StrategyTable;

@interface ReportKvResp : WXPBGeneratedMessage

@property (nonatomic) int ret;
@property (nonatomic) unsigned int genstgver;
@property (nonatomic) unsigned int clistgver;
@property (nonatomic) unsigned int uinstgver;
@property (retain, nonatomic) StrategyTable *genstgtable;
@property (retain, nonatomic) StrategyTable *clistgtable;
@property (retain, nonatomic) StrategyTable *uinstgtable;
@property (nonatomic) unsigned int datavalidtime;
@property (nonatomic) unsigned int banreporttime;
@property (nonatomic) unsigned int pollingtime;

+ (void)initialize;

- (void)setPollingtime:(unsigned int)a0;
- (unsigned int)pollingtime;
- (void)setBanreporttime:(unsigned int)a0;
- (unsigned int)banreporttime;
- (void)setDatavalidtime:(unsigned int)a0;
- (unsigned int)datavalidtime;
- (void)setUinstgtable:(id)a0;
- (id)uinstgtable;
- (void)setClistgtable:(id)a0;
- (id)clistgtable;
- (void)setGenstgtable:(id)a0;
- (id)genstgtable;
- (void)setUinstgver:(unsigned int)a0;
- (unsigned int)uinstgver;
- (void)setClistgver:(unsigned int)a0;
- (unsigned int)clistgver;
- (void)setGenstgver:(unsigned int)a0;
- (unsigned int)genstgver;
- (void)setRet:(int)a0;
- (int)ret;

@end
