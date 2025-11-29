@class QyBaseResponse, BizChatUser, BaseResponse;

@interface SetBrandFlagResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) BizChatUser *user;

+ (void)initialize;

@end
