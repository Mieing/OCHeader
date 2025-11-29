@class NSString;

@interface DownloadSpeed : WXPBGeneratedMessage

@property (nonatomic) unsigned long long sizeByte;
@property (nonatomic) unsigned long long costMs;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) int netType;
@property (retain, nonatomic) NSString *clientIp;
@property (nonatomic) unsigned int networkId;
@property (retain, nonatomic) NSString *serverIp;
@property (nonatomic) unsigned long long moovSizeByte;
@property (nonatomic) unsigned long long moovCostMs;

+ (void)initialize;

- (void)setMoovCostMs:(unsigned long long)a0;
- (unsigned long long)moovCostMs;
- (void)setMoovSizeByte:(unsigned long long)a0;
- (unsigned long long)moovSizeByte;
- (void)setServerIp:(id)a0;
- (id)serverIp;
- (void)setNetworkId:(unsigned int)a0;
- (unsigned int)networkId;
- (void)setClientIp:(id)a0;
- (id)clientIp;
- (void)setNetType:(int)a0;
- (int)netType;
- (void)setEndTime:(unsigned long long)a0;
- (unsigned long long)endTime;
- (void)setStartTime:(unsigned long long)a0;
- (unsigned long long)startTime;
- (void)setCostMs:(unsigned long long)a0;
- (unsigned long long)costMs;
- (void)setSizeByte:(unsigned long long)a0;
- (unsigned long long)sizeByte;

@end
