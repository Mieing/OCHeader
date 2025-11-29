@class MemoryMappedKV, NSString, WebviewJSEventHandlerFacade, NSArray;
@protocol MMClientJsApiHandlerDelegate;

@interface MMClientJsApiHandler : NSObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate, PBMessageObserverDelegate>

@property (retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandler;
@property (retain, nonatomic) MemoryMappedKV *slotKv;
@property (copy, nonatomic) id /* block */ callbackBlock;
@property (copy, nonatomic) id /* block */ cgiCallbackBlock;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) long long basePkgVersion;
@property (nonatomic) long long bizPkgVersion;
@property (nonatomic) BOOL disableInvokeApi;
@property (nonatomic) BOOL disableCgiApi;
@property (retain, nonatomic) NSArray *allowedCgiList;
@property (copy, nonatomic) NSString *bizDomain;
@property (copy, nonatomic) NSString *canvasId;
@property (weak, nonatomic) id<MMClientJsApiHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setupApiWithJSContext:(id)a0;
- (void)addApi_getBasePkgVersion:(id)a0;
- (void)addApi_getBizPkgVersion:(id)a0;
- (void)addApi_setLocalData:(id)a0;
- (void)addApi_getLocalData:(id)a0;
- (void)addApi_invoke:(id)a0;
- (void)reportInvokeJsapi:(id)a0;
- (void)addApi_cgi:(id)a0;
- (void)doCommenCGIWithCmdId:(long long)a0 cgiUrl:(id)a1 reqProtoBuf:(id)a2 callback:(id)a3;
- (void)callbackWithId:(id)a0 params:(id)a1;
- (void)onEndEvent:(id)a0 withResult:(id)a1;
- (id)GetCurrentWebviewViewController;
- (id)webviewController;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
