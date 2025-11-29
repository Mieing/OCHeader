@class NSMutableArray, BaseResponse;

@interface EcCustomerGetAfterSalesOrderListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *afterSalesOrderList;
@property (retain, nonatomic) NSMutableArray *afterSalesOrderDetailJsonList;
@property (nonatomic) BOOL hasMore;

+ (void)initialize;

@end
