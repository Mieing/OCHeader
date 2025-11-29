@class JSAPIBaseResponse, NSString, NSMutableArray, BaseResponse;

@interface JSAPIAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSMutableArray *authInfo;
@property (retain, nonatomic) NSString *authTitle;
@property (retain, nonatomic) NSMutableArray *scopeAuthInfo;

+ (void)initialize;

@end
