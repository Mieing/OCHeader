@class NSString, AWEBDARifleViewController, AWEAwemeModel;

@interface AWEAdLynxWebViewManager : HTSService <AWEBDARifleViewControllerLifeCycleProtocol, AWEAdLynxViewControllerService>

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) AWEBDARifleViewController *lynxVC;
@property (copy, nonatomic) NSString *lynxSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)traceAdLynxLandingPageAdTraceSelected:(id)a0 withAdLynxSource:(unsigned long long)a1;
+ (void)traceAdLynxLandingPageShowResult:(id)a0 withAdExtraData:(id)a1;
+ (void)traceAdLynxLandingPageDataReceived:(id)a0 withAdLynxSource:(unsigned long long)a1;
+ (void)traceAdLynxLandingPageAdTraceTryShow:(id)a0;
+ (id)adExtraDataForTraceWithAweme:(id)a0;

- (void)onServiceInit;
- (id)aAWEPadModuleAdapter;
- (BOOL)openLynxViewControllerWithContext:(id)a0;
- (id)bdaRifleLynxViewControllerWithLynxSchema:(id)a0 withAweme:(id)a1 accessKey:(id)a2 fallbackProceessedByManager:(BOOL)a3;
- (void)rifleViewControllerDidFinishLoad:(id)a0;
- (void)rifleViewController:(id)a0 didReceiveFirstLoad:(double)a1;
- (void)rifleViewController:(id)a0 didReceiveError:(id)a1;
- (void)rifleViewController:(id)a0 loadFailedWithErrorInfo:(id)a1;
- (void)rifleViewControllerDidClose:(id)a0;
- (id)multiWindowAssociatedControllerForNow;
- (void)padMultiPush:(id)a0 withAssociatedController:(id)a1;
- (void).cxx_destruct;

@end
