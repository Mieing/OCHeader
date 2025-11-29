@class CJPayNFCConfig;

@interface AWEPayNFCRouteHandler : NSObject

@property (class, retain, nonatomic) CJPayNFCConfig *nfcSettings;

+ (BOOL)handleRouteBusiness:(id)a0;
+ (long long)routeLoadOptimize:(id)a0;
+ (void)timorDidAppearNoti:(id)a0;
+ (BOOL)isAllowScheme:(id)a0;
+ (void)removeLoadingLoadingByDefault:(BOOL)a0 routeType:(long long)a1;

@end
