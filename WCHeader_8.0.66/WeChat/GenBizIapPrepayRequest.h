@class BaseRequest, NSString;

@interface GenBizIapPrepayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *timeStamp;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *paySign;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *stepInUrl;

+ (void)initialize;

@end
