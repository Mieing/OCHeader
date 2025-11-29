@class NSData;

@interface KVLogItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int logId;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) unsigned int logTime;
@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned int reportType;

+ (void)initialize;

- (void)setReportType:(unsigned int)a0;
- (unsigned int)reportType;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;
- (void)setLogTime:(unsigned int)a0;
- (unsigned int)logTime;
- (void)setValue:(id)a0;
- (id)value;
- (void)setLogId:(unsigned int)a0;
- (unsigned int)logId;

@end
