@interface CJPayAliChannel : CJPayBasicChannel

@property (nonatomic) BOOL wakingApp;
@property (nonatomic) BOOL startTime;
@property (nonatomic) BOOL isAliInstalled;
@property (nonatomic) BOOL isNeedUpdateInstallStatus;

+ (void)registerPlugin;
+ (BOOL)isAvailableUse;

- (BOOL)canProcessWithURL:(id)a0;
- (void)p_asyncRefreshInstalledStatus;
- (void)appDidInForeground;
- (void)appDidInBackground;
- (id)channelScheme;
- (void)handleAliPayResponse:(id)a0;
- (void)payActionWithDataDict:(id)a0 completionBlock:(id /* block */)a1;
- (id)getAliPayVersion;
- (void)exeCompletionBlock:(unsigned long long)a0 resultType:(unsigned long long)a1 rawErrorCode:(id)a2;
- (BOOL)isInstalled;
- (id)init;
- (void)dealloc;

@end
