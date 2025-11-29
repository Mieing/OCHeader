@interface CSJEcomCouponManager : NSObject

+ (void)_requestWithMaterial:(id)a0 slot:(id)a1 retry:(BOOL)a2;
+ (void)pbu_requestWithInfoViewModel:(id)a0 completion:(id /* block */)a1;
+ (void)pbu_couponResponseHandlerWithInfoViewModel:(id)a0 request:(id)a1 completion:(id /* block */)a2;
+ (void)appleCouponWithMaterial:(id)a0 slot:(id)a1 completion:(id /* block */)a2;
+ (void)takeCouponWithInfoViewModel:(id)a0 completion:(id /* block */)a1;

@end
