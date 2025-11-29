@class BaseRequest, NSString;

@interface TransferPhoneSuccPageReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *outTradeNo;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *rcvrOpenid;
@property (retain, nonatomic) NSString *rcvrToken;
@property (nonatomic) unsigned int amount;
@property (retain, nonatomic) NSString *placeorderToken;
@property (retain, nonatomic) NSString *placeorderExt;

+ (void)initialize;

@end
