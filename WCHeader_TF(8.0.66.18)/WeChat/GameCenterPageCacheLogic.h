@interface GameCenterPageCacheLogic : NSObject

+ (id)readPageCacheForUrl:(id)a0;
+ (void)removePageCacheForPkgId:(id)a0;
+ (void)markNeedDiscardPageCacheForWebView:(id)a0;
+ (BOOL)needDiscardPageCacheForWebView:(id)a0;

@end
