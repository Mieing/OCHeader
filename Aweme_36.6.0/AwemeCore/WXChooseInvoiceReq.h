@class NSString;

@interface WXChooseInvoiceReq : BaseReq

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) unsigned int shopID;
@property (copy, nonatomic) NSString *signType;
@property (copy, nonatomic) NSString *cardSign;
@property (nonatomic) unsigned int timeStamp;
@property (copy, nonatomic) NSString *nonceStr;

- (void).cxx_destruct;

@end
