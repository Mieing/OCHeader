@interface CgiTraceClockData : WXPBGeneratedMessage

@property (nonatomic) unsigned long long triggerNativeExecute;
@property (nonatomic) unsigned long long triggerNativeCallback;
@property (nonatomic) unsigned long long triggerNativeAddCgiQueue;

+ (void)initialize;

@end
