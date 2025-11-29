@class JsApiResponse, BaseResponse;

@interface MMCgiTransferResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JsApiResponse *jsApiResponse;

+ (void)initialize;

- (void)setJsApiResponse:(id)a0;
- (id)jsApiResponse;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
