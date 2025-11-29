@class NSString;

@interface AWEIMPushModuleService : HTSService <AWEIMPushModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterPushLimitSceneWithID:(id)a0 forLimitType:(long long)a1;
- (void)exitPushLimitSceneWithID:(id)a0 forLimitType:(long long)a1;
- (id)currentLimitSceneIDsWithType:(long long)a0;

@end
