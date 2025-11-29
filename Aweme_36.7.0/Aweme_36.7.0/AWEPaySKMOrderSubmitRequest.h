@interface AWEPaySKMOrderSubmitRequest : CJPayBaseRequest

+ (id)buildUrl:(id)a0;
+ (void)fetchRMCPayeeInfo:(id)a0 completion:(id /* block */)a1;
+ (void)createOrder:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
+ (void)fetchOrderPromotionInfo:(id)a0 completion:(id /* block */)a1;

@end
