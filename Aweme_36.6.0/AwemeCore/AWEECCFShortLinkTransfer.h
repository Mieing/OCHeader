@interface AWEECCFShortLinkTransfer : NSObject

+ (id)cf_handleDistributionUrl:(id)a0 urlType:(long long)a1 routerParams:(id)a2;
+ (void)cf_distributionABTest:(id)a0 token:(id)a1 type:(id)a2 completion:(id /* block */)a3;
+ (void)cf_distributionReport:(id)a0 completion:(id /* block */)a1;
+ (void)transformCFShortLink:(id)a0 completion:(id /* block */)a1;

@end
