@class StatusGetIconConfigListCgiReq, StatusCgiRespErr, StatusGetIconConfigListCgiResp;

@interface StatusGetIconConfigListRequestResult : WXPBGeneratedMessage

@property (retain, nonatomic) StatusCgiRespErr *result;
@property (retain, nonatomic) StatusGetIconConfigListCgiResp *resp;
@property (retain, nonatomic) StatusGetIconConfigListCgiReq *req;

+ (void)initialize;

@end
