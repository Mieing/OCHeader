@class NSString, WKWebView, BDWKWebViewTerminateRescuerConfig;

@interface BDWKWebViewTerminateRescuer : NSObject

@property (class, nonatomic) double sameWebViewTwiceTerminateMinInterval;
@property (class, nonatomic) double allWebViewTripleTerminateMinInterval;
@property (class, nonatomic) double disableInvisibleReloadInterval;
@property (class, nonatomic) double reloadDelayInterval;

@property (retain, nonatomic) BDWKWebViewTerminateRescuerConfig *config;
@property (weak, nonatomic) WKWebView *webview;
@property (nonatomic) unsigned long long curReloadLeftCount;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL isTerminated;
@property (nonatomic) BOOL errorViewShown;
@property (nonatomic) long long lastTerminateTs;
@property (nonatomic) unsigned long long totalTerminateCount;
@property (nonatomic) unsigned long long totalReloadCount;
@property (nonatomic) unsigned long long totalShowErrorViewCount;
@property (nonatomic) unsigned long long totalClickErrorViewCount;
@property (copy, nonatomic) NSString *lastRescueAction;
@property (copy, nonatomic) NSString *lastAction;
@property (nonatomic) BOOL lastTerminateVisible;

+ (BOOL)needDisableInvisibleReload:(long long)a0;
+ (void)disableInvisibleReload;

- (id)monitorContext;
- (void)errorViewClick;
- (void)reloadWithErrorView:(BOOL)a0 delay:(BOOL)a1;
- (id)initWithWebView:(id)a0 config:(id)a1;
- (void)viewDidAppear;
- (void)webViewWebContentProcessDidTerminate:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear;

@end
