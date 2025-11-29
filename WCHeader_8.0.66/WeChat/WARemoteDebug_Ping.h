@class NSString;

@interface WARemoteDebug_Ping : WXPBGeneratedMessage

@property (nonatomic) unsigned long long pingId;
@property (retain, nonatomic) NSString *payload;

+ (void)initialize;

@end
