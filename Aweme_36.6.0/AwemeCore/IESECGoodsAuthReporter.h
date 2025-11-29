@interface IESECGoodsAuthReporter : NSObject

+ (void)obtainAuthResultForCurrentUserWithEcomAppID:(id)a0 completion:(id /* block */)a1;
+ (void)reportAuthResultForCurrentUserWithEcomAppID:(id)a0 completion:(id /* block */)a1;

@end
