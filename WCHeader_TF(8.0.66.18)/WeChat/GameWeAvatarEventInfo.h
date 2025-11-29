@class NSString;

@interface GameWeAvatarEventInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long eventTimestamp;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned long long timeoutMs;
@property (nonatomic) BOOL immediate;

+ (void)initialize;

@end
