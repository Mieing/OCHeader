@class SubmitOriginalReviewRequest_WxaGameEnvContext, BaseRequest, NSString, WxaGameBaseInfo, WxaGameClientPublicLibInfo, SubmitOriginalReviewRequest_WxagGameOriginalReviewResult;

@interface SubmitOriginalReviewRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) WxaGameBaseInfo *wxaGameInfo;
@property (retain, nonatomic) WxaGameClientPublicLibInfo *publicLib;
@property (retain, nonatomic) SubmitOriginalReviewRequest_WxaGameEnvContext *envContext;
@property (retain, nonatomic) SubmitOriginalReviewRequest_WxagGameOriginalReviewResult *result;

+ (void)initialize;

@end
