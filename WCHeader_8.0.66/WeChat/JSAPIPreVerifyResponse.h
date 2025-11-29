@class JSAPIBaseResponse, NSString, NSMutableArray, BaseResponse;

@interface JSAPIPreVerifyResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) JSAPIBaseResponse *jsapiBaseresponse;
@property (retain, nonatomic) NSMutableArray *verifyInfoList;
@property (retain, nonatomic) NSMutableArray *domainPathList;
@property (retain, nonatomic) NSString *appHeadimgUrl;
@property (retain, nonatomic) NSMutableArray *authWebCompt;

+ (void)initialize;

@end
