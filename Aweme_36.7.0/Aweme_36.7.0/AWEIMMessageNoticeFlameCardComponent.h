@class NSString, NSDictionary, AWEIMComponentManager;

@interface AWEIMMessageNoticeFlameCardComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (copy, nonatomic) NSString *cardLevel;
@property (copy, nonatomic) NSDictionary *cardConfig;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)sendRecoveryFlame;
- (void)gotoFlameAchievementPage;
- (void)p_adaptNoticeBackground;
- (void).cxx_destruct;

@end
