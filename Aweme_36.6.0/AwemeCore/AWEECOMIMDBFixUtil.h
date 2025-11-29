@class AWEECOMIMDBFixConfig, AWEECOMIMDBFixDeleteDBInfo;

@interface AWEECOMIMDBFixUtil : NSObject

@property (retain, nonatomic) AWEECOMIMDBFixConfig *config;
@property (nonatomic) long long receiveMsgTimeoutCount;
@property (nonatomic) BOOL canTriggerReLogin;
@property (nonatomic) long long didTriggerReLoginCount;
@property (nonatomic) BOOL canTriggerRecreateDB;
@property (nonatomic) BOOL didTriggerRecreateDB;
@property (nonatomic) BOOL didTriggerRollback;
@property (nonatomic) long long viewControllerCount;
@property (nonatomic) unsigned long long dbFixType;
@property (retain, nonatomic) AWEECOMIMDBFixDeleteDBInfo *deleteDBFix1Info;
@property (retain, nonatomic) AWEECOMIMDBFixDeleteDBInfo *deleteDBFix2Info;

+ (id)shared;

- (void)loadConfig;
- (void)setNeedsRollback;
- (void)incrementViewControllerCount;
- (void)decrementViewControllerCount;
- (void)tryTriggerRecoverStrategyWithCompletion:(id /* block */)a0;
- (void)handleViewControllerPop:(id)a0;
- (BOOL)p_kvShouldRollBack;
- (void)p_tryTriggerRollbackWithCompletion:(id /* block */)a0;
- (void)p_tryTriggerRecoverStrategyWithCompletion:(id /* block */)a0;
- (void)resetReceiveMsgTimeoutCount;
- (void)p_makeSureDidLogoutWithCompletion:(id /* block */)a0;
- (void)p_switchDBFixTypeWithCompletion:(id /* block */)a0;
- (BOOL)p_tryDeleteDB:(unsigned long long)a0;
- (void)p_markDeleteDB:(unsigned long long)a0;
- (void)p_setKVShouldRollback:(BOOL)a0;
- (void)p_rollbackDBFixTypeWithCompletion:(id /* block */)a0;
- (id)generateKey:(id)a0 userID:(id)a1;
- (id)p_deleteDBInfoWithKey:(id)a0;
- (void)p_setDeleteDBInfo:(id)a0 key:(id)a1;
- (BOOL)didTriggerRecoverStrategy;
- (void)incrementReceiveMsgTimeoutCount;
- (void)handleUserDidFinishLogoutWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
