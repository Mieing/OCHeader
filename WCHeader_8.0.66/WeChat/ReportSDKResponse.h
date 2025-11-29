@class NSMutableArray, BaseResponse;

@interface ReportSDKResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int reportAggregateIntervalMs;
@property (nonatomic) unsigned int reportAggregateCount;
@property (retain, nonatomic) NSMutableArray *itemConfs;
@property (nonatomic) unsigned long long itemConfsVersion;

+ (void)initialize;

- (void)setItemConfsVersion:(unsigned long long)a0;
- (unsigned long long)itemConfsVersion;
- (void)setItemConfs:(id)a0;
- (id)itemConfs;
- (void)setReportAggregateCount:(unsigned int)a0;
- (unsigned int)reportAggregateCount;
- (void)setReportAggregateIntervalMs:(unsigned int)a0;
- (unsigned int)reportAggregateIntervalMs;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
