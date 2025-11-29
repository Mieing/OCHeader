@class NSString, AWEActivityControllerManager;

@interface AWEActivityConfigManager : NSObject <AWEDigitalWellbeingMessage, AWEUserMessage, AWEActivityConfigManagerProtocol>

@property (retain, nonatomic) AWEActivityControllerManager *feedContainManager;
@property (retain, nonatomic) AWEActivityControllerManager *detailManager;
@property (retain, nonatomic) AWEActivityControllerManager *nearby2TabManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)setupObservation;
- (void)setupPendantBaseView:(id)a0 type:(unsigned long long)a1;
- (void)cleanActivityPendantData;
- (void)enableLottieAnimation:(BOOL)a0 baseView:(unsigned long long)a1;
- (void)updateDataAndDownloadResourceWithSetting:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
