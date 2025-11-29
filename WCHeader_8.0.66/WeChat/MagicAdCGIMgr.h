@interface MagicAdCGIMgr : NSObject

+ (void)getAdsCGIWithPosIds:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
+ (void)adsReportCGIWithRequest:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
+ (void)adsReportForPayCGIWithRequest:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
+ (void)adsReportForPCADCGIWithRequest:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;

@end
