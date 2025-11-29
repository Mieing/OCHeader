@interface IESECCartHelper : NSObject

+ (id)getCartVCWithParams:(id)a0;
+ (void)updateCartVCShouldReloadBySwitchTabState:(id)a0;
+ (void)trackCartStartWithRequest:(id)a0;
+ (void)trackCartShowWithRequest:(id)a0 status:(id)a1 extraParams:(id)a2;
+ (void)trackCartYataTimingBegin:(id)a0 timestamp:(id)a1 attachedObj:(id)a2 extra:(id)a3;
+ (id)trackCartYataTimingEnd:(id)a0 timestamp:(id)a1 attachedObj:(id)a2 extra:(id)a3;
+ (id)getCartRequestWithParams:(id)a0;
+ (id)getCartVCWithRequest:(id)a0;
+ (void)showCartWithRequest:(id)a0;
+ (void)showCartWithParams:(id)a0 sourceVC:(id)a1 completion:(id /* block */)a2;

@end
