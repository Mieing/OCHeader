@class JsApiResponse, BaseResponse;

@interface MMCgiTransferResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JsApiResponse *jsApiResponse;

+ (void)initialize;

@end
