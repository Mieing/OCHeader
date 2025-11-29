@class NSRecursiveLock, NSString, NSMutableArray, WKWebViewConfiguration;
@protocol BDWKPrecreatorLifeCycle;

@interface BDWKPrecreator : NSObject <WKNavigationDelegate>

@property (retain, nonatomic) NSMutableArray *arrOfInstances;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double lastMemoryWarningTime;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) long long maxNumberOfInstances;
@property (nonatomic) long long memoryWarningProtectDuration;
@property (nonatomic) BOOL isClearPrecreateWKWhenMemoryWarning;
@property (nonatomic) BOOL forbidPrecreateInBackground;
@property (nonatomic) double precreateWKDelaySeconds;
@property (retain, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (copy, nonatomic) id /* block */ generateHandler;
@property (readonly, nonatomic) unsigned long long cachedCount;
@property (weak, nonatomic) id<BDWKPrecreatorLifeCycle> lifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPrecreator;
+ (id)ttnetPrecreator;

- (id)takeWebView;
- (void)adjustmentWKIfNeed;
- (BOOL)needAddInstance;
- (void)produceWKWhenMainThreadIdle;
- (BOOL)needRemoveInstance;
- (id)takeWebViewWithIsFromCache:(BOOL *)a0;
- (id)generateWKWebView;
- (void)_clearManualPreCreateWK;
- (void)applicationWillEnterForeground:(id)a0;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
