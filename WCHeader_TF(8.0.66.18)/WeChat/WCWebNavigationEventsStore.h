@class NSURL, WKWebView, WKNavigation;

@interface WCWebNavigationEventsStore : WCWebEventsStore

@property (weak, nonatomic) WKWebView *curWebView;
@property (retain, nonatomic) WKNavigation *curNavigation;
@property (copy, nonatomic) NSURL *curURLInNavigation;

- (id)currentNavigation;
- (id)currentWebView;
- (id)currentURL;
- (id)currentFullUrlString;
- (void)webView:(id)a0 navigationDidCommit:(id)a1;
- (void)webView:(id)a0 navigationDidFinish:(id)a1;
- (void)webView:(id)a0 navigationDidFailed:(id)a1 error:(id)a2;
- (void)webView:(id)a0 navigationDidBridged:(id)a1;
- (void)webView:(id)a0 gotPermissionForURLString:(id)a1;
- (void)webView:(id)a0 didGetA8keyReqUrl:(id)a1 fullUrl:(id)a2;
- (void).cxx_destruct;

@end
