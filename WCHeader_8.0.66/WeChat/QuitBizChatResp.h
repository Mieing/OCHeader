@class QyBaseResponse, BaseResponse;

@interface QuitBizChatResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;

+ (void)initialize;

@end
