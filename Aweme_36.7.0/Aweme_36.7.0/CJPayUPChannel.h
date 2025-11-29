@class NSString;

@interface CJPayUPChannel : CJPayBasicChannel

@property (nonatomic) BOOL wakingApp;
@property (nonatomic) BOOL ignoreInstall;
@property (copy, nonatomic) NSString *envString;
@property (copy, nonatomic) NSString *tnTradeNo;
@property (copy, nonatomic) NSString *selfScheme;
@property (nonatomic) BOOL isUpInstalled;
@property (nonatomic) BOOL isNeedUpdateInstallStatus;

+ (void)registerPlugin;

- (BOOL)canProcessWithURL:(id)a0;
- (void)p_asyncRefreshInstalledStatus;
- (void)appDidInForeground;
- (id)channelScheme;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (void)exeCompletionBlock:(unsigned long long)a0 resultType:(unsigned long long)a1 rawErrorCode:(id)a2;
- (void)p_updateInstallStatus;
- (void)p_handleUPPayResponse:(id)a0 data:(id)a1;
- (void)p_trackUnionpayAppInvoke:(BOOL)a0 popType:(id)a1 errorCode:(id)a2 errorMessage:(id)a3;
- (void)p_showErrorAlertViewWithErrorText:(id)a0 errorType:(unsigned long long)a1;
- (void)trackUnionpayAppInvoke:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isInstalled;
- (id)init;
- (void)dealloc;

@end
