@class NSString, UIWindow, AWEVCDImportFansViewController;

@interface AWEContentSyncManager : NSObject <IESSDKApiDelegate, IESPlatformSDKApiDelegate, AWEContentSyncManagerProtocol>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIWindow *contentSyncAuthWindow;
@property (retain, nonatomic) UIWindow *keyWindow;
@property (retain, nonatomic) AWEVCDImportFansViewController *authViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)applicationDidEnterBackgroundInOAuthMgr:(id)a0;
- (void)doHideOAuthViewController;
- (void)endObservationDidAppEnterBackground;
- (void)startObservationDidAppEnterBackground;
- (BOOL)application:(id)a0 openURL:(id)a1;
- (void)registerProduct;
- (void)bindConfigutation;
- (BOOL)isAppSupported;
- (void)showTeenAlert:(id /* block */)a0;
- (BOOL)askForContentSyncDidReceiveReq:(id)a0 completion:(id /* block */)a1;
- (void)syncContent:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)didReceiveResponse:(id)a0;
- (void)dealloc;
- (void)setup;
- (BOOL)isAppInstalled;

@end
