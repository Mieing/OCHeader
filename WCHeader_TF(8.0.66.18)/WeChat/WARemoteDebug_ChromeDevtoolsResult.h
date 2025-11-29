@class NSString;

@interface WARemoteDebug_ChromeDevtoolsResult : WXPBGeneratedMessage

@property (nonatomic) unsigned long long opId;
@property (retain, nonatomic) NSString *payload;
@property (retain, nonatomic) NSString *jscontextId;

+ (void)initialize;

@end
