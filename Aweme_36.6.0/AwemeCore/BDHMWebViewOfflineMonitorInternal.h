@class NSString;

@interface BDHMWebViewOfflineMonitorInternal : NSObject <BDWebInterceptorMonitor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)bdw_URLSchemeTask:(id)a0 didReceiveResponse:(id)a1;
- (void)bdw_URLSchemeTask:(id)a0 didLoadData:(id)a1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)a0;
- (void)bdw_URLSchemeTask:(id)a0 didFailWithError:(id)a1;
- (void)bdw_URLSchemeTask:(id)a0 didPerformRedirection:(id)a1 newRequest:(id)a2;
- (void)bdw_URLProtocolTaskDidFinishLoading:(id)a0;
- (void)bdw_URLProtocolTask:(id)a0 didFailWithError:(id)a1;
- (void)handleSchemeTask:(id)a0;
- (void)handleProtocolTask:(id)a0;
- (void)reportWithOriginDict:(id)a0 webview:(id)a1;

@end
