@class JSAPIBaseResponse, BaseResponse;

@interface JSRefreshSessionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (nonatomic) unsigned int sessionExpireIn;

+ (void)initialize;

@end
