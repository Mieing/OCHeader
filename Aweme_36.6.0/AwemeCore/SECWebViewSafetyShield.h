@class NSString;
@protocol SECWebTrafficFeatureDetector, SECWebSafetyPolicy;

@interface SECWebViewSafetyShield : NSObject <SECWebViewPlugin>

@property (retain, nonatomic) id<SECWebSafetyPolicy> policy;
@property (retain, nonatomic) id<SECWebTrafficFeatureDetector> webFeatureDetector;
@property (nonatomic) unsigned long long maxWebViewPagesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchTraceFromWebView:(id)a0;
+ (BOOL)compareLinkIsEqual:(id)a0 with:(id)a1;

- (void)setupFeatureDetector:(id)a0;
- (void)webView:(id)a0 changedURLFrom:(id)a1 toURL:(id)a2;
- (void)onPluginInit;
- (void)handleSecLinkRiskNotification:(id)a0;
- (void)handleSecLinkResponseNotificationInMainThread:(id)a0;
- (void)handleSecLinkHeaderRiskNotification:(id)a0;
- (void)handleSecLinkResponseNotification:(id)a0;
- (void)setupPolicy:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addNotificationObserver;

@end
