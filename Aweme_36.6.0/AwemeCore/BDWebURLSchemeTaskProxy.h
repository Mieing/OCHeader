@class NSString;
@protocol WKURLSchemeTask;

@interface BDWebURLSchemeTaskProxy : NSObject <BDWebURLSchemeTaskDelegate>

@property BOOL stopped;
@property (weak, nonatomic) id<WKURLSchemeTask> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)schemeTaskRedirectionSelector;

- (void)URLSchemeTask:(id)a0 didReceiveResponse:(id)a1;
- (void)URLSchemeTask:(id)a0 didLoadData:(id)a1;
- (void)URLSchemeTaskDidFinishLoading:(id)a0;
- (void)URLSchemeTask:(id)a0 didFailWithError:(id)a1;
- (void)URLSchemeTask:(id)a0 didPerformRedirection:(id)a1 newRequest:(id)a2;
- (void)webView:(id)a0 willRecordMainFrameModel:(id)a1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
