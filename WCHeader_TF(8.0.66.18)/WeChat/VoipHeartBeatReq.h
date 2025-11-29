@class BaseRequest;

@interface VoipHeartBeatReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) unsigned int timestamp;
@property (nonatomic) unsigned long long timestamp64;
@property (nonatomic) int connectionType;

+ (void)initialize;

@end
