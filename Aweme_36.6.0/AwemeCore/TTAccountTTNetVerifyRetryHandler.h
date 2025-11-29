@interface TTAccountTTNetVerifyRetryHandler : NSObject

@property (nonatomic) BOOL isHandlingVerify;

+ (void)p_addRequestRetryFilterOnce;
+ (id)syncHandleMFADecisionWithResponse:(id)a0;
+ (void)addRequestRetryFilter;
+ (id)sharedInstance;

- (void)handleMFADecisionWithResponse:(id)a0 completion:(id /* block */)a1;
- (void)realHandleMFADecision:(id)a0 response:(id)a1 completion:(id /* block */)a2;

@end
