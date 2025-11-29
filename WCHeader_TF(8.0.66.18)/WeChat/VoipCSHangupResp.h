@class BaseResponse;

@interface VoipCSHangupResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;

+ (void)initialize;

@end
