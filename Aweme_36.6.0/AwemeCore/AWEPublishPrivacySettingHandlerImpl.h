@class ACCCameraSubscription, NSString, AWEVideoPublishViewModel;

@interface AWEPublishPrivacySettingHandlerImpl : NSObject <AWEPublishPrivacySettingHandlerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioGlobalConfigClass;

- (id)aAWEStudioGlobalConfig;
- (id)initWithPublishModel:(id)a0;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (void)didSelectPrivacy:(id)a0 isUserSelect:(BOOL)a1 isTrackable:(BOOL)a2;
- (void)showRedpacketPrivatePublishToastIfNeeded;
- (void)refreshWithPublishViewModel:(id)a0;
- (void)p_configExclusionModelIfNeed;
- (BOOL)p_needShowRedpacketPrivatePublishToast;
- (void)p_markPrivacyChangeRedPacketAlertShowed;
- (void)p_updateVideoSyncWithPrivacyOption:(unsigned long long)a0 originalPrivacyType:(unsigned long long)a1;
- (void)didSelectPrivacyForNormal:(id)a0 isUserSelect:(BOOL)a1;
- (void)handlePrivacyPermissionTypeForStoryPublishPageWithParamsModel:(id)a0 handleBlock:(id /* block */)a1;
- (BOOL)p_preventSyncToApps;
- (void)updatePrivacyData;
- (BOOL)p_isRedpacketTaskAcitivity;
- (id)p_redpacketPrivatePublishToastLastShowDate;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
