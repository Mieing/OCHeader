@class NSString;

@interface LogItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int logid;
@property (retain, nonatomic) NSString *logBuffer;
@property (nonatomic) unsigned int category;

+ (void)initialize;

@end
