@class BaseRequest, NSString;

@interface BusiF2FCancelPayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *qrcodeId;
@property (retain, nonatomic) NSString *receiverOpenid;
@property (retain, nonatomic) NSString *f2FTradeNo;
@property (nonatomic) unsigned long long cancelSource;

+ (void)initialize;

@end
