@class NSString;

@interface VerifyWxPayReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *noncestr;
@property (retain, nonatomic) NSString *packageStr;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *paySign;

+ (void)initialize;

@end
