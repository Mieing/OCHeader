@class GameWebViewRecord, NSString;

@interface GameWebViewLifeManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) GameWebViewRecord *webviewRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)pageId:(id)a0;
- (void)onServiceClearData;
- (void)recordWebView:(id)a0;
- (void)removeWebViewRecord:(id)a0;
- (void)onWebViewCreate:(id)a0 dispatchEvent:(BOOL)a1;
- (void)onWebViewForeground:(id)a0 dispatchEvent:(BOOL)a1;
- (void)onWebViewBackground:(id)a0 dispatchEvent:(BOOL)a1;
- (void)onWebViewDestroy:(id)a0 dispatchEvent:(BOOL)a1;
- (void)dispatchPageState:(id)a0 pageId:(id)a1 url:(id)a2;
- (void)dispatchPageState:(id)a0 pageId:(id)a1 url:(id)a2 dispatchEvent:(BOOL)a3;
- (void)postMessageToWebView:(id)a0 msg:(id)a1;
- (void)notifyJsCoreStateChange:(id)a0;
- (id)getTopWebViewController;
- (void).cxx_destruct;

@end
