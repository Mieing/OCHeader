@class NSString, EcCustomerOrder;

@interface MMCustomerOrderInfo : NSObject

@property (retain, nonatomic) NSString *orderId;
@property (retain, nonatomic) EcCustomerOrder *orderBaseInfo;
@property (readonly, copy, nonatomic) NSString *priceWording;
@property (nonatomic) BOOL expanded;

+ (id)convertFromProductList:(id)a0;
+ (id)genFromGetOrderListResp:(id)a0;
+ (id)genFromSearchOrderResp:(id)a0;

- (id)initWithEcCustomerOrder:(id)a0;
- (id)productAmountWordingOf:(id)a0;
- (void).cxx_destruct;

@end
