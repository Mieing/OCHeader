@class BaseRequest, NSString;

@interface GetWuidTokenReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *adUrl;
@property (retain, nonatomic) NSString *posid;

+ (void)initialize;

@end
