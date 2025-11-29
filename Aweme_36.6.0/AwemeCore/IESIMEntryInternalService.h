@class NSString;
@protocol AWEIMEntryServiceCommonAdapter;

@interface IESIMEntryInternalService : HTSService <IESIMEntryInternalService>

@property (retain, nonatomic) id<AWEIMEntryServiceCommonAdapter> imEntryAdapter;
@property (copy) NSString *landingReasonStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMEntryServiceCommonAdapterClass;

- (BOOL)canShowEnterpriseModes;
- (BOOL)isQualifiedForEnterpriseModes;
- (BOOL)hasEnterpriseInvalidConvMode;
- (BOOL)tabbarHasNotificationTab;
- (BOOL)isIMFeatureEnable;
- (void)recordLandingReason:(id)a0;
- (id)runReadyIMTask;
- (void)didLoadIMFirstPageData;
- (BOOL)isLandingReasonOtherUserPush;
- (BOOL)im_isSplashShowing;
- (id)tagGuideTipGifUrl;
- (void)setDatabaseIsReady;
- (id)snapShotModelList;
- (void)clearLandingSnapShot;
- (id)snapShotStorageKey:(id)a0;
- (id)chatSnapShotKey;
- (id)createPerfFPSMonitorWrapper;
- (Class)chatDemoteLaunchControllerClass;
- (id)aAWEIMEntryServiceCommonAdapter;
- (void).cxx_destruct;

@end
