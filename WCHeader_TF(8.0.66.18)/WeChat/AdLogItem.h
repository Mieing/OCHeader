@class NSData;

@interface AdLogItem : WXPBGeneratedMessage

@property (nonatomic) int logId;
@property (retain, nonatomic) NSData *logStr;
@property (nonatomic) long long createTime;

+ (void)initialize;

@end
