@class NSDictionary, WebViewJSLogicImpl, MMWebViewController, WCWebNavigationEventsStore;

@interface WCWebNavigationEventActionContext : MMObject

@property (weak, nonatomic) WebViewJSLogicImpl *webJsImpl;
@property (weak, nonatomic) WCWebNavigationEventsStore *webEventsStore;
@property (weak, nonatomic) MMWebViewController *webViewController;
@property (retain, nonatomic) NSDictionary *jsInitInfo;

- (void).cxx_destruct;

@end
