@interface ReportTime : WXPBGeneratedMessage

@property (nonatomic) unsigned long long cliTimeMs;
@property (nonatomic) unsigned long long svrTimeMs;

+ (void)initialize;

- (void)setSvrTimeMs:(unsigned long long)a0;
- (unsigned long long)svrTimeMs;
- (void)setCliTimeMs:(unsigned long long)a0;
- (unsigned long long)cliTimeMs;

@end
