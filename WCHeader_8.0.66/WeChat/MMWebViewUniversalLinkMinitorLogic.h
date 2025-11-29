@class NSString, WKWebView;

@interface MMWebViewUniversalLinkMinitorLogic : MMObject

@property (copy, nonatomic) NSString *nsLastWebViewNavigationSourceUrl;
@property (copy, nonatomic) NSString *nsLastWebViewNavigationUrl;
@property (nonatomic) unsigned long long uiLastNavigationTimeStampInMs;
@property (nonatomic) unsigned int navigateActionMatchControlAction;
@property (weak, nonatomic) WKWebView *webview;
@property (copy, nonatomic) NSString *weAppAppId;

- (id)init;
- (void)dealloc;
- (void)onAllowWebViewNavigation:(id)a0 sourceUrl:(id)a1;
- (void)onRewindWebViewNavigation:(id)a0 sourceUrl:(id)a1;
- (void)onWebViewDidStartLoadAllowedNavigation:(id)a0;
- (void)clearAllNavigationInfo;
- (void)onEnterBackground;
- (void)__clearAllNavigationInfo;
- (void)reportUniversalLinkActionWithReportKey:(unsigned int)a0;
- (void)__reportUniversalLinkNavigationKVStatWhenNavigationWork:(BOOL)a0;
- (void).cxx_destruct;

@end
