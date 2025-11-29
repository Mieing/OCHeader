@interface AWEOpenPlatformScanRouter : NSObject

+ (void)showToastWithText:(id)a0;
+ (void)actionOpenplatformURL:(id)a0;
+ (BOOL)canJumpToThirdApp:(id)a0;
+ (void)reportScanResultWithURL:(id)a0 withScopes:(id)a1 succeed:(BOOL)a2;
+ (void)jumpToThirdApp:(id)a0 Target:(id)a1 downloadURL:(id)a2 withCompletion:(id /* block */)a3;

@end
