@class NSURL, NSString;

@interface AWESECAppJumpAppLinkPlugin : IWKPluginObject <IWKClassPlugin>

@property (nonatomic) double lastCrossOriginTimestamp;
@property (retain, nonatomic) NSURL *lastCrossOriginPageURL;
@property (retain, nonatomic) NSURL *lastCrossOriginRequestURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)inject;
+ (id)shared;

- (void)onAppDidEnterBackground:(id)a0;
- (BOOL)isCrossOriginWithPrevURL:(id)a0 nextURL:(id)a1;
- (BOOL)applinkEnableWithParams:(id)a0 ruleList:(id)a1;
- (void).cxx_destruct;
- (id)webView:(id)a0 didCommitNavigation:(id)a1;
- (id)init;
- (long long)priority;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;

@end
