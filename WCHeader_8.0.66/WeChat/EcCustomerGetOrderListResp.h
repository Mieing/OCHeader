@class NSString, NSMutableArray, BaseResponse;

@interface EcCustomerGetOrderListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *orderList;
@property (retain, nonatomic) NSMutableArray *orderDetailJsonList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *lastIndex;

+ (void)initialize;

@end
