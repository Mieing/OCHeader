@class JSAPIBaseResponse, NSMutableArray, BaseResponse;

@interface JSAuthorizeConfirmResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSMutableArray *riskInfoList;

+ (void)initialize;

@end
