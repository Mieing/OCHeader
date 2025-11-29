@class WCOutCouponCgi, NSString, WCOutGetProductListCgi;

@interface WCOutCgiMgr : MMUserService <WCOutCouponCgiDelegate, WCOutGetProductListCgiDelegate, MMServiceProtocol>

@property (retain, nonatomic) WCOutCouponCgi *couponCgi;
@property (retain, nonatomic) WCOutGetProductListCgi *getproductlistCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestCoupon:(unsigned int)a0;
- (void)requestProductList:(id)a0 reqCurrency:(id)a1;
- (void)WCOutCounponCgi:(id)a0 successWithResponse:(id)a1;
- (void)WCOutCounponCgiDidFail:(id)a0;
- (void)WCOutGetProductListCgi:(id)a0 successWithResponse:(id)a1;
- (void)WCOutGetProductListCgiDidFail:(id)a0;
- (void).cxx_destruct;

@end
