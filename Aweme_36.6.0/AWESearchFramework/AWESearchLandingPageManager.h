@interface AWESearchLandingPageManager : NSObject

+ (BOOL)isLynxURL:(id)a0;
+ (BOOL)isWebURL:(id)a0;
+ (id)searchLandingPageRuleWhitelist;
+ (BOOL)isHitLynxOnlineWithUrl:(id)a0 settingsArray:(id)a1;
+ (BOOL)isHitLynxLibraWithUrl:(id)a0 settingsConfig:(id)a1;
+ (BOOL)isHitH5OnlineWithUrl:(id)a0 settingsArray:(id)a1;
+ (BOOL)isHitH5LibraWithUrl:(id)a0 settingsConfig:(id)a1;
+ (BOOL)isHitH5WhitlistWithUrl:(id)a0 settingsArray:(id)a1;
+ (BOOL)isHitLynxWhitlistWithUrl:(id)a0 settingsArray:(id)a1;
+ (long long)getSearchLandingPageNavigationBarStyleWithUrl:(id)a0;

@end
