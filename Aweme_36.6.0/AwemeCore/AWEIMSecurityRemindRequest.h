@interface AWEIMSecurityRemindRequest : NSObject

+ (void)requestSecurityGlobalToastConfigWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (void)reportSecurityGlobalToastStatusWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (void)requestSecurityGlobalFloaterConfigWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (void)reportSecurityGlobalFloaterStatusWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (void)requestSecurityToastConfigWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (void)reportSecurityToastStatusWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (void)requestSecurityTopTipConfigWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (void)reportSecurityTopTipStatusWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (id)domain;

@end
