@class NSString, WKWebView;

@interface ADFGUserAgentHelper : NSObject

@property (retain, nonatomic) WKWebView *webview;
@property (copy, nonatomic) NSString *ua;
@property (nonatomic) BOOL updatedUa;

+ (id)sharedInstance;

- (id)userAgent;
- (void).cxx_destruct;
- (id)init;
- (id)setup;

@end
