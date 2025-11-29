@class NSString;

@interface IESIMInnerPushService : HTSService <IESIMInnerPushService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)disableInnerPush:(BOOL)a0 forItem:(id)a1;
- (void)blockNotificationLessAndEqualPriority:(long long)a0 business:(long long)a1 validateBlockCondition:(id /* block */)a2;
- (void)releaseNotificationBlockWithBusiness:(long long)a0;
- (void)enterPushLimitSceneWithID:(id)a0 forLimitType:(long long)a1;
- (void)exitPushLimitSceneWithID:(id)a0 forLimitType:(long long)a1;
- (id)currentLimitSceneIDsWithType:(long long)a0;
- (id)createIMNotificationChocker;
- (long long)p_convertPriorityWithIMPriority:(long long)a0;
- (long long)p_convertBusineeWithIMBusiness:(long long)a0;
- (long long)p_aweConditionTypeWithIESIMType:(long long)a0;

@end
