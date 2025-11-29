@class AWEHPChannelInfoModel, MMKV, UIViewController;

@interface AWEUGMaterialAdvertisingDataCenter : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) double timeoutThreshold;
@property (nonatomic) double retryTimeoutThreshold;
@property (nonatomic) BOOL isStayingFallbackSchema;
@property (weak, nonatomic) UIViewController *fallbackVC;
@property (nonatomic) long long fallbackTabbarItemType;
@property (retain, nonatomic) AWEHPChannelInfoModel *fallbackChannelInfo;

+ (id)sharedInstance;

- (void)onAppDidEnterBackground:(id)a0;
- (BOOL)interceptDeeplinkForMaterialAdvertisingIfNeeded:(id)a0;
- (void)handleTimeoutRetryForURL:(id)a0;
- (void)requestJumpSchemeForURL:(id)a0 completion:(id /* block */)a1;
- (void)asyncRequestRealSchemeForURL:(id)a0 needJump:(BOOL)a1 completion:(id /* block */)a2;
- (id)appendOriginalQueryToScheme:(id)a0 query:(id)a1;
- (void)trackWithErrorCode:(long long)a0 originalScheme:(id)a1 realScheme:(id)a2 extraParams:(id)a3;
- (void)asyncRequestRealSchemeForURL:(id)a0 needJump:(BOOL)a1 isRetry:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)checkStayingFallbackScheme;
- (void)resetFallbackSchemaStatus;
- (BOOL)validateGuidePopupInfo:(id)a0;
- (void).cxx_destruct;

@end
