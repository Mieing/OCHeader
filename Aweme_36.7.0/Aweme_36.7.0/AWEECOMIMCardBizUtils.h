@interface AWEECOMIMCardBizUtils : NSObject

+ (id)buildCardUrlContextParamsWithProductId:(id)a0 entryModel:(id)a1;
+ (void)requestSelectOrderListSchemeWithShopId:(id)a0;
+ (id)editAddressHanderWithUrl:(id)a0 shopId:(id)a1 orderId:(id)a2 completion:(id /* block */)a3;
+ (id)formatDeliveryTime:(double)a0 schedule:(id)a1 latest:(id)a2 isSchedule:(BOOL)a3;
+ (id)reserveDeliveryWithOrderId:(id)a0 shopId:(id)a1 deliveryTime:(id)a2 completion:(id /* block */)a3;
+ (void)openProductDetailPage:(id)a0 entryInfo:(id)a1 unitBtmId:(id)a2 responder:(id)a3 bcmUnitParams:(id)a4;
+ (id)displayDeliveryTime:(double)a0 dateFormat:(id)a1;
+ (id)getWeekStringFromWeek:(long long)a0;
+ (void)openOrderDetailPage:(id)a0 entryInfo:(id)a1 unitBtmId:(id)a2 responder:(id)a3;
+ (void)fetchSchemaWithPage:(id)a0 bizParams:(id)a1 completion:(id /* block */)a2;
+ (id)getSourcePage:(id)a0;
+ (id)generateOpenProductDetailParamsWithProductId:(id)a0 entryInfo:(id)a1;
+ (void)viewCardRecord:(id)a0 completion:(id /* block */)a1;
+ (id)showPriceNum:(long long)a0;
+ (id)showIntegerTypePriceNum:(long long)a0;
+ (void)openOrderDetailPage:(id)a0 entryInfo:(id)a1;
+ (void)fetchRouteAfterSaleUrl:(id)a0 skuOrderId:(id)a1 completion:(id /* block */)a2;
+ (void)viewCardRecord:(id)a0 cardType:(id)a1 completion:(id /* block */)a2;
+ (void)fetchCouponStatusWithParamsDict:(id)a0 completion:(id /* block */)a1;
+ (void)refuseNegotiateWithEncodeShopId:(id)a0 afterSaleId:(id)a1 completion:(id /* block */)a2;

@end
