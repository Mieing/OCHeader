@class NSMutableDictionary, NSString, NSHashTable, WKWebView;

@interface BDWebPreloadManager : NSObject <WKScriptMessageHandler>

@property (retain, nonatomic) WKWebView *preloadWebView;
@property (retain, nonatomic) NSMutableDictionary *preloadResources;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedManager;

- (void)stopPreload;
- (id)p_htmlWithPreloadResources:(id)a0;
- (void)p_callingOutLoadFinishHref:(id)a0 baseURL:(id)a1 status:(unsigned long long)a2;
- (void)addPreloadObserver:(id)a0;
- (void)preloadResources:(id)a0 baseURL:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
