@class BaseRequest, NSString;

@interface PreparePurchaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *currencyType;
@property (nonatomic) unsigned int payType;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int quantity;

+ (void)initialize;

@end
