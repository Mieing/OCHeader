@class NSMutableDictionary, AWEUserSharedLoginLoadingViewController;

@interface DYSharedLoginManager : NSObject

@property (retain, nonatomic) AWEUserSharedLoginLoadingViewController *jumpToAuthLoadingVC;
@property (retain, nonatomic) NSMutableDictionary *sharedLoginMonitorParams;
@property (nonatomic) BOOL didLogined;
@property (nonatomic) BOOL isAuthLogin;

+ (BOOL)isDouyin;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;
+ (Class)aAWEUserModuleServiceDOUYINHTSAdapterClass;
+ (BOOL)isShownLiteType:(id)a0;
+ (unsigned long long)loginPlatform:(id)a0;
+ (id)dyopen_urlWithBaseURLString:(id)a0 byAppendQueryItems:(id)a1;
+ (id)douyin_URLEncodedString:(id)a0;
+ (id)douyin_serializatedStringWithObject:(id)a0;
+ (BOOL)shouldShowSharedLiteLoginINHotSoon;
+ (id)sharedManager;

- (BOOL)shouldShowDouyinSharedLogin;
- (BOOL)shouldShowLiteSharedLogin;
- (id)getUserModel;
- (void)appendMonitorParams:(id)a0;
- (id)aAWEUserModuleServiceDOUYINAdapter;
- (id)aAWEUserModuleServiceDOUYINHTSAdapter;
- (id)getUserModelShownType:(unsigned long long)a0;
- (void)trackMonitorEvent;
- (void)jumpToAuth:(id)a0 userModel:(id)a1 loadingAnimate:(id /* block */)a2 completion:(id /* block */)a3;
- (void)showLoadingWhenJumpToAuthByAccountSDK;
- (void)dismissLoadingWhenJumpToAuthByAccountSDK;
- (BOOL)isAimAppInstalledWithAppid:(id)a0;
- (void)jumpToAuthByAccountSDK:(id)a0 userModel:(id)a1 loadingAnimate:(id /* block */)a2 completion:(id /* block */)a3;
- (void)jumpToAuthByOpenPlatform:(id)a0 userModel:(id)a1 loadingAnimate:(id /* block */)a2 completion:(id /* block */)a3;
- (id)trackerParamsByCustomUserInfo:(id)a0 startTime:(double)a1 endTime:(double)a2;
- (id)dyopen_md5ForAppId;
- (BOOL)shouldShowSharedLoginWithProviderAppId:(id)a0;
- (void).cxx_destruct;

@end
