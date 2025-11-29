@class QyBaseResponse, BizChat, BaseResponse;

@interface UpdateBizChatResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) BizChat *chat;

+ (void)initialize;

@end
