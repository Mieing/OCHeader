@class NSString;

@interface WARemoteDebug_Pong : WXPBGeneratedMessage

@property (nonatomic) unsigned long long pingId;
@property (nonatomic) unsigned int networkType;
@property (retain, nonatomic) NSString *payload;

+ (void)initialize;

@end
