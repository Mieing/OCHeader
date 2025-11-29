@class NSDictionary, NSString;
@protocol AWEPzEngineProtocol;

@interface AWEHPNewBadgeManager : NSObject <AWEHPBadgeManagerProtocol>

@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (copy, nonatomic) NSDictionary *badgeTypeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createTask;
- (void)tryShowBadgeWithTask:(id)a0 canShowCallBack:(id /* block */)a1;
- (void)trackHideBadgeWithModel:(id)a0;
- (BOOL)badgeMigratePizza;
- (BOOL)badgeStrategyEnable;
- (void)trackShowBadgeWithModel:(id)a0;
- (void)getPizzaPermissionWithPreCheckBadge:(id)a0 tabID:(id)a1 position:(id)a2 precheckCompletion:(id /* block */)a3;
- (void).cxx_destruct;

@end
