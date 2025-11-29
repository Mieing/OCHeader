@class BaseRequest, NSString;

@interface MMBizJsApiGetUserOpenIdReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *busiId;
@property (retain, nonatomic) NSString *userName;

+ (void)initialize;

@end
