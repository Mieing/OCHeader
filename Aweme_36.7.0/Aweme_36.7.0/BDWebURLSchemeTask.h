@class NSMutableDictionary, NSDictionary, WKWebView, NSString, NSURLRequest;
@protocol BDWebURLSchemeTaskDelegate, BDWebURLSchemeTaskLifeCycleProtocol;

@interface BDWebURLSchemeTask : NSObject <BDWebURLSchemeTask>

@property (weak, nonatomic) id<BDWebURLSchemeTaskDelegate> delegate;
@property (nonatomic) BOOL bdw_shouldUseNetReuse;
@property (weak, nonatomic) WKWebView *bdw_webView;
@property (retain, nonatomic) NSURLRequest *bdw_request;
@property (retain, nonatomic) NSDictionary *bdw_additionalInfo;
@property (retain, nonatomic) NSMutableDictionary *bdw_rlProcessInfoRecord;
@property (retain, nonatomic) NSDictionary *bdw_ttnetResponseTimingInfoRecord;
@property (copy, nonatomic) id /* block */ bdw_dataProcessor;
@property (copy, nonatomic) id /* block */ bdw_responseProcessor;
@property (weak, nonatomic) id<BDWebURLSchemeTaskLifeCycleProtocol> bdw_lifecycleDelegate;
@property (nonatomic) BOOL taskHasFinishOrFail;
@property (nonatomic) BOOL canHandle;
@property (nonatomic) BOOL taskFinishWithTTNet;
@property (nonatomic) BOOL taskFinishWithLocalData;
@property (nonatomic) BOOL useTTNetCommonParams;
@property (nonatomic) BOOL ttnetEnableCustomizedCookie;
@property (nonatomic) BOOL willRecordForMainFrameModel;
@property (nonatomic) int taskHttpCachePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bdw_didFailWithError:(id)a0;
- (void)bdw_didFinishLoading;
- (void)bdw_didReceiveResponse:(id)a0;
- (void)bdw_didPerformRedirection:(id)a0 newRequest:(id)a1;
- (void)bdw_didLoadData:(id)a0;
- (void).cxx_destruct;

@end
