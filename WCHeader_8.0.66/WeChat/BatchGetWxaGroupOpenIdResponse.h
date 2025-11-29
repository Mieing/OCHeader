@class JSAPIBaseResponse, NSMutableArray, BaseResponse;

@interface BatchGetWxaGroupOpenIdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSMutableArray *userInfoList;

+ (void)initialize;

@end
