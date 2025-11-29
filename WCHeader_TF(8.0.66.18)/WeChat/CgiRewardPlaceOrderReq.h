@class BaseRequest, NSString;

@interface CgiRewardPlaceOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *receiverName;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *qrcodeDesc;
@property (retain, nonatomic) NSString *payerDesc;
@property (nonatomic) unsigned int amountType;
@property (nonatomic) unsigned int channel;
@property (retain, nonatomic) NSString *scanId;
@property (retain, nonatomic) NSString *receiverOpenId;
@property (retain, nonatomic) NSString *webviewUrl;
@property (retain, nonatomic) NSString *extendStr1;
@property (retain, nonatomic) NSString *extendStr2;
@property (nonatomic) unsigned int showPayerInfo;

+ (void)initialize;

@end
