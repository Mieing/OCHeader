@class NSURL, NSString, WKWebView;

@interface AWESECAppJumpContext : NSObject

@property (retain, nonatomic) NSURL *targetURL;
@property (retain, nonatomic) NSURL *sourceHybridURL;
@property (nonatomic) unsigned long long checkStartTime;
@property (copy, nonatomic) NSString *sqrID;
@property (weak, nonatomic) WKWebView *webView;

- (void).cxx_destruct;

@end
