@class BaseRequest, NSString;

@interface MmecAddProductToShopBagReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
