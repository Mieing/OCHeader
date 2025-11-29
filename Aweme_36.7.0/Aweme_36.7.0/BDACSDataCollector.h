@class BDACSResourceManager, NSString, BDAThreadSafeDictionary, BDACSBaseProcessor, BDACSConfigModel, BDACSWebLoadingState, BDACSDataCollectorMulitipleDelegates, WKWebView;

@interface BDACSDataCollector : NSObject <BDACSResourceManagerDelegate, BDWebInterceptorMonitor>

@property (readonly, copy, nonatomic) NSString *webURLString;
@property (readonly, nonatomic) long long maxFileSize;
@property (readonly, nonatomic) BDAThreadSafeDictionary *collectingResource;
@property (readonly, nonatomic) BDACSBaseProcessor *webReportProcessor;
@property (readonly, nonatomic) BDACSBaseProcessor *pornInspectProcessor;
@property (readonly, nonatomic) BDACSDataCollectorMulitipleDelegates *delegates;
@property (readonly, nonatomic) BDACSResourceManager *manager;
@property (readonly, nonatomic) BDACSConfigModel *config;
@property (weak, nonatomic) WKWebView *webView;
@property (copy) NSString *jumpURLString;
@property (readonly, nonatomic) BDACSWebLoadingState *loadingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdw_URLSchemeTask:(id)a0 didReceiveResponse:(id)a1;
- (void)bdw_URLSchemeTask:(id)a0 didLoadData:(id)a1;
- (void)bdw_URLSchemeTaskDidFinishLoading:(id)a0;
- (void)bdw_URLSchemeTask:(id)a0 didFailWithError:(id)a1;
- (void)bdw_URLSchemeTask:(id)a0 didPerformRedirection:(id)a1 newRequest:(id)a2;
- (BOOL)shouldRemoveFileItem:(id)a0 processorType:(unsigned long long)a1;
- (id)initWithConfig:(id)a0 webView:(id)a1;
- (void)collectBase64ImageFromWebView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
