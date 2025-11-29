@class JSAPIBaseResponse, NSMutableArray, BaseResponse;

@interface BatchGetWxaUserNameResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSMutableArray *userInfoList;

+ (void)initialize;

@end
