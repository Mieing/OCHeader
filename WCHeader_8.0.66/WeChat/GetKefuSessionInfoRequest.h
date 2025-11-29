@class BaseRequest, NSString;

@interface GetKefuSessionInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *subAppid;

+ (void)initialize;

@end
