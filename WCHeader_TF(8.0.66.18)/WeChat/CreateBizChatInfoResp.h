@class QyBaseResponse, FullBizChat, BaseResponse;

@interface CreateBizChatInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) FullBizChat *fullChat;

+ (void)initialize;

@end
