@class NSData, NSString;

@interface ServerBaseHandShakeResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *serverRandom;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int svrTime;
@property (nonatomic) unsigned int expireTimeInterval;

+ (void)initialize;

@end
