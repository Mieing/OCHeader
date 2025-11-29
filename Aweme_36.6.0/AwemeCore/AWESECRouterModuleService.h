@class NSString;

@interface AWESECRouterModuleService : HTSService <AWESECRouterModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLString:(id)a0 attachedSQRID:(id)a1;
- (id)URLStringAttachedSQRSession:(id)a0;
- (BOOL)enableWebcastRouteSecurity;
- (BOOL)routeInternalCheckin:(id)a0 checkinType:(id)a1 fromVC:(id)a2;
- (void)routeInternalCheckoutWithSuccess:(id)a0 checkoutType:(id)a1 fromVC:(id)a2 toVC:(id)a3;

@end
