@class NSMutableArray, BaseResponse;

@interface EcCustomerSearchOrderListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *orderList;
@property (retain, nonatomic) NSMutableArray *orderDetailJsonList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned int offset;

+ (void)initialize;

@end
