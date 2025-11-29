@class NSData;

@interface KVCommReportItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int logId;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int refreshTime;
@property (nonatomic) unsigned int type;

+ (void)initialize;

- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setRefreshTime:(unsigned int)a0;
- (unsigned int)refreshTime;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;
- (void)setEndTime:(unsigned int)a0;
- (unsigned int)endTime;
- (void)setStartTime:(unsigned int)a0;
- (unsigned int)startTime;
- (void)setValue:(id)a0;
- (id)value;
- (void)setLogId:(unsigned int)a0;
- (unsigned int)logId;

@end
