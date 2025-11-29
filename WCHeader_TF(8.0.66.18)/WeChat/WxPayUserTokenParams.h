@class NSString;

@interface WxPayUserTokenParams : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *payPackage;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *timestamp;
@property (retain, nonatomic) NSString *paySign;
@property (retain, nonatomic) NSString *nonceStr;

+ (void)initialize;

@end
