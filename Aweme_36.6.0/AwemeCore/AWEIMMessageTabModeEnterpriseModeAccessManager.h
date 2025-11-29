@class AWEIMUser, NSString, AWEIMEnterpriseModeTagGuideConfig, AWEIMEnterpriseModeGuideConfig, NSNumber;

@interface AWEIMMessageTabModeEnterpriseModeAccessManager : NSObject <AWEUserMessage>

@property (nonatomic) BOOL disableEnterpriseModesBySettings;
@property BOOL databaseIsReady;
@property (retain, nonatomic) NSNumber *enterpriseStickOnTopStrategyCachedResult;
@property (retain) AWEIMEnterpriseModeGuideConfig *guideConfigCache;
@property (nonatomic) BOOL hasReadGuideConfigFromLocalStorage;
@property (retain) AWEIMEnterpriseModeTagGuideConfig *tagGuideConfigCache;
@property (retain) NSNumber *cachedQualifiedResult;
@property (readonly, nonatomic) AWEIMUser *loginUser;
@property (retain) AWEIMUser *innerUser;
@property (retain, nonatomic) NSNumber *msgTabStyle;
@property (retain, nonatomic) NSNumber *invalidConvTabFromCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)roleIDsWhiteList;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (BOOL)canShowEnterpriseModes;
- (BOOL)isQualifiedForEnterpriseModes;
- (BOOL)couldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)shouldExcludeEnterpriseNoticeFromServiceNotice;
- (BOOL)cachedShouldDisableVajra;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)setDatabaseIsReady;
- (void)handleDidTabbarSelectedDidChange:(id)a0;
- (BOOL)p_canShowEnterpriseModes;
- (BOOL)__databaseHasBeenReadyBefore;
- (BOOL)__wasEnterpriseProfessionalMode;
- (BOOL)checkDatabaseIsReady;
- (BOOL)revertFixOnEnterpriseModesInitialization;
- (id)aweim_showServiceTipViewKey;
- (BOOL)isServiceBussinessRole;
- (BOOL)isAccessToServiceChat;
- (BOOL)isCServiceChat;
- (BOOL)isServiceChatModeOpen;
- (id)enterpriseModeGuideConfig;
- (BOOL)isServiceChat;
- (long long)enterpriseNoticeStickOnTopStrategy;
- (void)resolveAccess;
- (void)clearEnterpriseModeCache;
- (id)tagGuideConfig;
- (void)updateGuideShowHistory;
- (BOOL)shouldShowGuideStyle:(long long)a0;
- (void)updateMsgTabStyle:(id)a0;
- (BOOL)enableInvalidConvTabModeFromCache;
- (id)currentCacheUser;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
