@class BaseRequest, NSString;

@interface TransferPhonePlaceOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *rcvrOpenid;
@property (retain, nonatomic) NSString *rcvrToken;
@property (retain, nonatomic) NSString *getRcvrExt;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int delayCode;
@property (retain, nonatomic) NSString *realNameToken;
@property (retain, nonatomic) NSString *timestampMs;
@property (retain, nonatomic) NSString *replaceorderToken;

+ (void)initialize;

@end
