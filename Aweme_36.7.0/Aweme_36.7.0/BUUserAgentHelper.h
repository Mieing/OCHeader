@class NSString, WKWebView;

@interface BUUserAgentHelper : NSObject

@property (retain, nonatomic) WKWebView *webview;
@property (copy, nonatomic) NSString *ua;
@property (nonatomic) BOOL updatedUa;

+ (id)sharedInstance;

- (id)userAgent;
- (void).cxx_destruct;
- (id)init;
- (void)_update;

@end
