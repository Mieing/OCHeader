@class NSString;

@interface AWELuckyModuleServiceImpl : HTSService <AWELuckyModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELuckyModuleDOUYINAdapterClass;
+ (Class)aAWELuckyModuleDOUYINHTSAdapterClass;
+ (Class)aNSObjectClass;

- (void)updateCurrentItemID:(id)a0;
- (void)updateDateCalibrator:(id)a0 context:(id)a1 fromRequest:(id)a2;
- (void)setFeedCommentShowing:(BOOL)a0;
- (void)startCampaignSDK;
- (void)syncPrivacyAlertShown:(BOOL)a0;
- (void)buildTaskTimerTriggerAndServiceWithConfiguration:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;
- (void)__privacyAlertAgreed;
- (id)aNSObject;
- (id)aAWELuckyModuleDOUYINAdapter;
- (id)aAWELuckyModuleDOUYINHTSAdapter;
- (id)init;
- (void)dealloc;

@end
