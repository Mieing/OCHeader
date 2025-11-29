@class NSMutableArray, BaseResponse;

@interface DecryptForwardWechatMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *msgList;

+ (void)initialize;

@end
