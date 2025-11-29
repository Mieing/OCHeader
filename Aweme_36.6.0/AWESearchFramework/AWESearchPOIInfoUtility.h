@interface AWESearchPOIInfoUtility : NSObject

+ (id)locationAuthPopupBlacklist;
+ (void)showPOIAuthorizationPopupIfNeeded:(BOOL)a0 from:(id)a1 extraLogParams:(id)a2 withHandler:(id /* block */)a3;
+ (void)showPOIAuthPopupOnceInLifetimeWithFrom:(id)a0 extraLogParams:(id)a1 withHandler:(id /* block */)a2;
+ (void)showPOIAuthPopupWithFrequencyLimitEnable:(BOOL)a0 from:(id)a1 extraLogParams:(id)a2 withHandler:(id /* block */)a3;
+ (void)requestLocateWithHandler:(id /* block */)a0;
+ (void)showPOIAuthGuideBottomBarAddOnView:(id)a0 from:(id)a1 extraLogParams:(id)a2 completion:(id /* block */)a3;
+ (void)jumpToSettingPOIAuth;
+ (BOOL)hasLocationAuthPermission;
+ (void)requestLocationInfoIfNeedInMiddlePageWithKeyword:(id)a0 previousPage:(id)a1 refer:(id)a2;
+ (id)authBarTitle;
+ (id)authBarActionText;
+ (id)authRequestCert;
+ (void)showPOIAuthorizationPopupIfNeeded:(BOOL)a0 from:(id)a1 cert:(id)a2 extraLogParams:(id)a3 withHandler:(id /* block */)a4;
+ (BOOL)p_hasPOIAuthorizaiton;
+ (id)p_searchLocationServiceConfig;
+ (id)aiSearchLocationRequestCert;
+ (id)locateRequestCert;
+ (id)poiAuthJumpToSettingCert;
+ (id)middlePageLocateRequestCert;
+ (BOOL)isInAllowListForLocationWithPreviousPage:(id)a0 refer:(id)a1;
+ (id)authBarConfig;
+ (id)searchPOIAuthSettingsConfig;
+ (unsigned long long)searchDialogStyle;
+ (unsigned long long)searchPicStyle;

@end
