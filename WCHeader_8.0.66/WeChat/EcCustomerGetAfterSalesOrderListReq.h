@class BaseRequest, NSString;

@interface EcCustomerGetAfterSalesOrderListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *lastAfterSalesOrderId;
@property (nonatomic) unsigned int pageSize;

+ (void)initialize;

@end
