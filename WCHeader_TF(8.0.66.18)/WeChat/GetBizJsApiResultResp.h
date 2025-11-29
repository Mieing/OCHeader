@class QyBaseResponse, NSString, BaseResponse;

@interface GetBizJsApiResultResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) QyBaseResponse *qyBaseResp;
@property (retain, nonatomic) NSString *result;

+ (void)initialize;

@end
