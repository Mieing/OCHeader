@class AWEUGLiveActivityPermissionGuideLifeMonitor, NSDictionary, AWEUGLiveActivityGuideConfig, NSString;

@interface AWEUGLiveActivityGuideManager : NSObject <AWEUGLiveActivityPermissionGuideDelegateProtocol>

@property (retain, nonatomic) AWEUGLiveActivityGuideConfig *currentGuideConfig;
@property (copy, nonatomic) NSDictionary *businessToNotificationValueDict;
@property (retain, nonatomic) AWEUGLiveActivityPermissionGuideLifeMonitor *monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)showLiveActivityPermissionWithPitayaModel:(id)a0;
- (void)setPushSettingStatusWithScene:(id)a0 value:(id)a1;
- (void)desktopGuideConfirmButtonClick:(id)a0;
- (void)registerPitaya;
- (id)getGuideInfoConfigFromABValueWithBusiness:(id)a0 subBusiness:(id)a1;
- (void)showPermissionGuideWithPitayaMessage:(id)a0 guideInfoModel:(id)a1;
- (id)processGuideInfoModelWithPitayaMessage:(id)a0 guideInfoModel:(id)a1;
- (void)resetNotificationResult;
- (void)checkLiveActivityPermissionGuideCanShowWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)appDidBecomeActive:(id)a0;

@end
