@class NSString;

@interface AWEIMStartIMConfigService : HTSService <AWEIMStartIMConfigService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enablePreCreateImCore;
- (BOOL)enableStrategyConfigOpt;
- (BOOL)enablePreCreateTimx;
- (BOOL)enableNotifyOtherBusinessServiceStart;
- (BOOL)enablePreloadSnapShotAsync;
- (BOOL)enableFlameAsyncOpt;
- (BOOL)enableDiskManagerCreateOpt;
- (BOOL)enableEmoticonUpdateResOpt;
- (BOOL)enableEnterpriseModePrepare;
- (BOOL)enableFaceToFaceActivityOpt;
- (BOOL)enableFeedbackRecorderOpt;
- (BOOL)enableUpdateChatDemoteOpt;
- (BOOL)enableActivityUserOpt;
- (BOOL)enableEarlyRegisterByteSyncOpt;
- (BOOL)enableFetchActivityResOpt;
- (BOOL)enableIncentiveChatOpt;
- (BOOL)enableInitSendMessageAbilityOpt;
- (BOOL)enableInnerPushAsyncOpt;
- (BOOL)enableOsFeatureSupportOpt;
- (BOOL)enablePeerAbTestOpt;
- (BOOL)enableRecommendToolOpt;
- (BOOL)enableRefreshUserActiveLevelOpt;
- (BOOL)enableStartImBeginTrackOpt;
- (BOOL)enableStartImageCacheOpt;
- (BOOL)enableTaskCardOpt;
- (BOOL)enableMixPhotoOpt;
- (BOOL)enableFetchAppealBannerInfoOpt;
- (BOOL)enableLoadContactOpt;
- (BOOL)enableConsecutiveChatDaysOpt;
- (BOOL)enableCreateChildDataControllersOpt;
- (BOOL)enableSdkDidBecomeActiveOpt;
- (BOOL)enableNotifyUgSdkLoginOpt;
- (BOOL)enablePrepareAllChatDataBusinessLoginOpt;
- (BOOL)enablePrepareFtsOpt;
- (BOOL)enableRegisterExposureExperimentOpt;
- (BOOL)enableRegisterMessageOpt;
- (BOOL)enableResetChatContainersOpt;
- (BOOL)enableSetupBaseDataControllerPluginsOpt;
- (BOOL)enableEarlyFlushSettingsOpt;
- (BOOL)enableFetchOtherServiceDataOpt;
- (BOOL)enableShareOpt;
- (BOOL)enableObserveChatCountOpt;
- (BOOL)enableMutiConvertChatModelOpt;
- (id)startIMAsyncConfig;
- (BOOL)enableAsyncLoadContact;
- (id)init;

@end
