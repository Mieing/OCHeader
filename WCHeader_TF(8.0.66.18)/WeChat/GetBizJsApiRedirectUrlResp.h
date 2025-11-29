@class QyBaseResponse, NSString, BaseResponse;

@interface GetBizJsApiRedirectUrlResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) NSString *redirectUrl;

+ (void)initialize;

@end
