@class AiIvrReplyInfo, BaseResponse;

@interface BizInfoExtResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) AiIvrReplyInfo *aiIvrReply;

+ (void)initialize;

@end
