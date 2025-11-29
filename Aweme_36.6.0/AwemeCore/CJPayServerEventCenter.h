@interface CJPayServerEventCenter : NSObject

+ (id)defaultCenter;

- (void)postEvent:(id)a0 intergratedMerchantId:(id)a1 extra:(id)a2 completion:(id /* block */)a3;

@end
