@class BaseResponse;

@interface VoipCancelInviteResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;

+ (void)initialize;

@end
