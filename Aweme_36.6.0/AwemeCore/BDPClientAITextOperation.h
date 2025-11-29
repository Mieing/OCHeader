@class NSString, WKWebView;

@interface BDPClientAITextOperation : BDPClientAIFeatureCenterOperation <BDPClientAITextOperation> {
    WKWebView *_webView;
    NSString *_jsCode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeTask;
- (void)taskDone;
- (void)callCompletionBlocksWithError:(id)a0 text:(id)a1 executeDuration:(double)a2;
- (id)initWithWebView:(id)a0 jsCode:(id)a1;
- (void).cxx_destruct;

@end
