@class NSData;

@interface AdLogItem : WXPBGeneratedMessage

@property (nonatomic) int logId;
@property (retain, nonatomic) NSData *logStr;
@property (nonatomic) long long createTime;

+ (void)initialize;

- (void)setCreateTime:(long long)a0;
- (long long)createTime;
- (void)setLogStr:(id)a0;
- (id)logStr;
- (void)setLogId:(int)a0;
- (int)logId;

@end
