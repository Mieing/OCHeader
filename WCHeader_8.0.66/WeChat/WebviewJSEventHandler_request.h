@class NSURLSession;

@interface WebviewJSEventHandler_request : WebviewJSEventHandlerBase

@property (retain, nonatomic) NSURLSession *urlSession;

- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)onResponse:(id)a0 data:(id)a1 error:(id)a2 event:(id)a3 url:(id)a4;
- (void)endWithError:(id)a0 event:(id)a1;
- (void)endWithSuccessResult:(id)a0 event:(id)a1;
- (void)endWithResult:(id)a0 event:(id)a1;
- (void)setupNSURLSession;
- (id)headerDictionaryFromResponse:(id)a0;
- (void).cxx_destruct;

@end
