@protocol SettingModifyAliasLogicDelegate;

@interface SettingModifyAliasLogic : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<SettingModifyAliasLogicDelegate> m_delegate;

+ (void)reportSettingModifyAliasWithSessionid:(id)a0 andModifyAliasActionCode:(unsigned int)a1 andModifyAliasErrortype:(unsigned int)a2;
+ (void)reportSettingModifyAliasBackOrCancelWithSessionid:(id)a0 andModifyAliasPageScene:(unsigned int)a1;

- (void)dealloc;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)checkCanSetAlias;
- (void)OnCheckCanSetAlias:(id)a0;
- (BOOL)checkAliasValid:(id)a0;
- (void)OnCheckAliasValid:(id)a0;
- (BOOL)modifyAlias:(id)a0 checkCanSetAliasTicket:(id)a1 setAliasPwdTicket:(id)a2 setAliasHumanFaceTicket:(id)a3;
- (void)OnModifyAlias:(id)a0;
- (void).cxx_destruct;

@end
