@class NSString, NSArray, AWEAlertContext, AWEAlertCallbackWrapper, IESAccountPanelThemeModel, NSNumber, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEPreLoginAlertManager : NSObject <AWEUserMessage, AWELoginGuideStrategyProtocol, AWEMessageReachPopViewProtocol, AWEPreLoginAlertManagerProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (retain, nonatomic) AWEAlertContext *alertContext;
@property (retain, nonatomic) AWEAlertCallbackWrapper *callbackWrapper;
@property (copy, nonatomic) NSArray *lastOneLoginUser;
@property (nonatomic) BOOL hasTrustAccounts;
@property (nonatomic) BOOL enableOneLogin;
@property (copy, nonatomic) NSNumber *shouldLoginByTTAccountSDKFlag;
@property (copy, nonatomic) NSNumber *didLoginByTTAccountSDKFlag;
@property (nonatomic) long long requestFinishedCount;
@property (retain, nonatomic) IESAccountPanelThemeModel *themeModel;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;
@property (nonatomic) long long totalRequestCount;
@property (nonatomic) BOOL hasRequestTheme;
@property (nonatomic) BOOL hasShowPreLoginAlertAfterStartup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEUserModuleServiceDOUYINSSAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINLiteAdapterClass;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)showWithContext:(id)a0 callbackWrapper:(id)a1;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)preLoginShowedAfterStartup;
- (BOOL)canShowNow;
- (long long)methodType;
- (void)networkingReachabilityDidChangeNotification;
- (id)mr_accessIDForEvent:(id)a0;
- (BOOL)mr_enableAccessControlForEvent:(id)a0;
- (BOOL)isShowFrequencySatisfied;
- (BOOL)shouldUseLoginStrategyFrequencyControl;
- (void)startNewPeriod;
- (id)loginStrategySceneModel;
- (long long)preLoginAlertLastShowTime;
- (long long)loginGuideAlertLastShowTime;
- (long long)showMaxLimit;
- (id)oldStorageData;
- (BOOL)isShowFrequencySatisfiedByLoginStrategy;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)requestFinish;
- (void)trackPopViewWithModel:(id)a0;
- (id)aAWEUserModuleServiceDOUYINSSAdapter;
- (id)aAWEUserModuleServiceDOUYINAdapter;
- (void)addShowCount;
- (void)requestThemeDataIfNeed;
- (void)requestThemeData;
- (void)didLoginByTTAccountSDK;
- (void)showPreLoginWithPriorityConfig;
- (BOOL)shouldLoginByTTAccountSDK;
- (void)clearPeriodIfNeeded;
- (id)frequencyOptDic;
- (void)__contextThemeIdFromServerWithCompletion:(id /* block */)a0;
- (id)__contextThemeId;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (id)aAWEUserModuleServiceDOUYINLiteAdapter;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)prepareWithCompletion:(id /* block */)a0;
- (long long)sceneType;

@end
