@class NSURLRequest, NSString;

@interface WSResultViewLogic : WSWebViewLogic <YYWebViewDelegate> {
    NSString *_lastInputText;
    unsigned long long _lastInputTime;
}

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0;
- (void)loadFile:(id)a0;
- (void)loadUrlRequest:(id)a0;
- (id)urlFromParamsBeforeLoadFile:(id)a0;
- (void)prepareForDetailSearch:(id)a0;
- (BOOL)notifyPreCheckQuery:(id)a0;
- (void)updateLocalSuggestion:(id)a0;
- (void)safeSendQueryChangedJSEvent:(id)a0;
- (void)onWebViewFinishedLoad:(id)a0;
- (void)onWebViewFailLoad:(id)a0 withError:(id)a1;
- (void)onWebViewTerminal:(id)a0;
- (void)onJsEvaluateError:(id)a0;
- (void)frequencyLimitCheck;
- (void).cxx_destruct;

@end
