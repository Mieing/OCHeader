@class BaseRequest;

@interface VoipCSHeartBeatReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (nonatomic) unsigned long long timestamp;

+ (void)initialize;

@end
