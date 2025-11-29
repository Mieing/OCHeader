@class NSData, BaseResponse;

@interface GetILinkAuthInfoForAIAgentResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *ilinkAuthCode;
@property (nonatomic) BOOL needUserAuth;

+ (void)initialize;

@end
