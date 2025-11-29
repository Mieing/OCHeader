@class AWETeenagerEntryLogicController, NSString, NSObject;
@protocol AWEGuardianPlatformManagerProtocol;

@interface AWEChildModeModuleService : HTSService <AWEChildModeModuleService>

@property (retain, nonatomic) NSObject<AWEGuardianPlatformManagerProtocol> *guardianPlatformManager;
@property (retain, nonatomic) AWETeenagerEntryLogicController *teenagerEntryLogicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)teenModeStatusCode;
- (BOOL)isDigitalWellbeingAlertShowing;
- (BOOL)shouldShowTeenModeAlert;
- (BOOL)shouldShowTimeManagerHint;
- (id)teenModeStatusManager;
- (id)digitalWellbeingAlertManager;
- (id)u18VerificationManager;
- (id)teenProtectionHomeViewControllerWithType:(unsigned long long)a0;
- (id)minorModeTypeString;
- (id)teenModeEntryRouterString;
- (BOOL)isTeenModeEntryRelatedPage:(id)a0;
- (id)teenExternalAlbumReferString;
- (BOOL)isFromTeenExternalAlbumWithReferString:(id)a0;
- (Class)teenExternalAlbumBottomBarController;
- (Class)teenExternalAlbumTableController;
- (BOOL)isTeenExternalAlbumPanelShowing;
- (id)teenIntroPageLogExtraWithAwemeModel:(id)a0;
- (long long)timeLockInterval;
- (id)complianceMonitor;
- (id)confirmPasswordVC;
- (id)createPasswordVC;
- (id)timeLockSettingPasswordVC;
- (id)manageContentPasswordVC;
- (void)beginSetUserInfo;
- (id)teenRecommendManager;
- (id)teenProtectionLockViewControllerWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)u14VerificationGuideViewController;
- (id)teenAlbumPlayerTableViewControllerWithAlbumModel:(id)a0 logExtra:(id)a1 updateModelBlk:(id /* block */)a2;
- (id)complianceSettingsManager;
- (void).cxx_destruct;

@end
