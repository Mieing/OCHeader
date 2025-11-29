@class NSString, WKWebView;
@protocol WKURLSchemeTask;

@interface CSJWKURLSchemeTaskHandler : NSObject <CSJWebURLSchemeTaskHandler>

@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly, weak, nonatomic) id<WKURLSchemeTask> schemeTask;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bu_isValid;
- (id)initWithWebView:(id)a0 schemeTask:(id)a1;
- (void)bu_startURLSchemeTask;
- (void)bu_stopURLSchemeTask;
- (BOOL)p_canAddResponseForStatus:(unsigned long long)a0 webView:(id)a1 schemeTask:(id)a2;
- (BOOL)p_checkPlayableType:(id)a0;
- (void)p_playableZipGet:(id)a0 webView:(id)a1;
- (void)p_webView:(id)a0 schemeTask:(id)a1 downloadDataWithPath:(id)a2;
- (void)p_downLoadImageData_withWebView:(id)a0 schemeTask:(id)a1 completion:(id /* block */)a2;
- (double)p_getCurrentTime;
- (void)p_handleSuccessWithResponse:(id)a0 data:(id)a1 webView:(id)a2 schemeTask:(id)a3;
- (void)p_handleError:(id)a0 webView:(id)a1 urlSchemeTask:(id)a2;
- (void)p_downLoadImageDataUseFileCache_withWebView:(id)a0 schemeTask:(id)a1 completion:(id /* block */)a2;
- (void)p_downLoadImageDataUseSD_withCompletion:(id /* block */)a0;
- (void)p_deal_startTime:(double)a0 image:(id)a1 data:(id)a2 error:(id)a3 imageURL:(id)a4 completion:(id /* block */)a5;
- (void)p_updateWebViewInterceptResourceWithStartTime:(double)a0 imageData:(id)a1 completion:(id /* block */)a2 isLocalData:(BOOL)a3;
- (void)p_appendDataWithCompletion:(id /* block */)a0;
- (void)p_uploadExceptionEvent:(id)a0 webView:(id)a1;
- (void).cxx_destruct;

@end
