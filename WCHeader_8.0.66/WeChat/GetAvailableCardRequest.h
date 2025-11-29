@class BaseRequest, NSString, NSData;

@interface GetAvailableCardRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int shopId;
@property (retain, nonatomic) NSString *signType;
@property (retain, nonatomic) NSString *cardSign;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) NSString *nonceStr;
@property (retain, nonatomic) NSString *cardTpId;
@property (retain, nonatomic) NSString *cardType;
@property (retain, nonatomic) NSData *buff;
@property (nonatomic) unsigned int onlyInvoice;

+ (void)initialize;

@end
