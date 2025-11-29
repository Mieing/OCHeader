@class NSString;

@interface WARemoteDebug_NetworkDebugAPI : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *apiName;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSString *requestHeaders;
@property (nonatomic) unsigned long long timestamp;

+ (void)initialize;

@end
