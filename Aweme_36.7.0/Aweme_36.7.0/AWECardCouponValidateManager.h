@interface AWECardCouponValidateManager : NSObject

+ (void)validateCouponWithCodeID:(id)a0 completion:(id /* block */)a1;
+ (void)tryValidateCouponWithCodeID:(id)a0 actionType:(id)a1 source:(id)a2 routerDict:(id)a3 completion:(id /* block */)a4;

@end
