@class NSString, AWEECRouterInterceptMonitor, JsWorkerIOS, NSArray, UIViewController;
@protocol HybridResourceService, HybridResourceLoaderTaskProtocol;

@interface AWEECRouterIntercept : NSObject <AWEECRouterInterceptDelegate, ErrorCallback>

@property (retain, nonatomic) JsWorkerIOS *worker;
@property (retain, nonatomic) AWEECRouterInterceptMonitor *monitor;
@property (retain, nonatomic) id<HybridResourceLoaderTaskProtocol> geckoFetchTask;
@property (retain, nonatomic) id<HybridResourceService> resourceLoader;
@property (copy, nonatomic) NSString *originURLString;
@property (weak, nonatomic) UIViewController *sourceVC;
@property (nonatomic) BOOL rootSwitch;
@property (copy, nonatomic) NSString *jsURL;
@property (nonatomic) BOOL loadingSwitch;
@property (nonatomic) BOOL workerTerminalNil;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSArray *allowOptPageKey;
@property (copy, nonatomic) NSArray *allowOptEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupIntercept;
+ (id)sharedInstance;

- (id)gurdAccessKey;
- (void)transferToURLString:(id)a0;
- (void)networkReturn:(id)a0 error:(id)a1;
- (BOOL)transferPageIntercept:(id)a0 transfer:(id)a1;
- (void)beginTransfer;
- (BOOL)drainageNotGotoMall;
- (void)overTransfer:(id)a0;
- (void)fallBackToTransferPage;
- (void).cxx_destruct;
- (void)startLoading;
- (void)handleError:(id)a0;

@end
