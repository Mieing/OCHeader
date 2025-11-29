@class BaseResponse;

@interface VoipHeartBeatResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) unsigned int timestamp;

+ (void)initialize;

@end
