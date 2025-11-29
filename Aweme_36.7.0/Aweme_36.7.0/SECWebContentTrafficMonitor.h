@class NSString;

@interface SECWebContentTrafficMonitor : NSObject <BDWebInterceptorMonitor, BDWebRequestFilter>

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
- (BOOL)bdw_willBlockRequest:(id)a0;

@end
