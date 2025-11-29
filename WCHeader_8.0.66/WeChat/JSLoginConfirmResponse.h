@class JSAPIBaseResponse, NSString, BaseResponse;

@interface JSLoginConfirmResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSString *code;
@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *sessionKey;
@property (retain, nonatomic) NSString *sessionTicket;
@property (nonatomic) unsigned int lifespan;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *signature;

+ (void)initialize;

@end
