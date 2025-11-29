@class NSMutableDictionary, NSDictionary, NSArray, NSString, AWEHPTabComponentTrackHelper;
@protocol AWEPzEngineProtocol;

@interface AWEHPBadgeManager : NSObject <AWEHPBadgeManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *showBadgeMap;
@property (retain, nonatomic) NSMutableDictionary *badgeMap;
@property (copy, nonatomic) NSDictionary *priority;
@property (nonatomic) BOOL needDownGrade;
@property (retain, nonatomic) NSArray *redDotWhiteList;
@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;
@property (retain, nonatomic) AWEHPTabComponentTrackHelper *showDetailsHelper;
@property (copy, nonatomic) NSDictionary *badgeTypeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createTask;
- (void)tryShowBadgeWithTask:(id)a0 canShowCallBack:(id /* block */)a1;
- (void)trackShowBadgeWithTask:(id)a0 downgradedType:(long long)a1;
- (void)trackHideBadgeWithModel:(id)a0;
- (void)setupPriority;
- (id)needDownGradeBadgeWithNewBadge:(id)a0;
- (void)setUpTaskBlockBeforeVerify:(id)a0;
- (BOOL)badgeMigratePizza;
- (void)needDownGradeBadgeWithNewBadge:(id)a0 callBack:(id /* block */)a1;
- (BOOL)taskCanReuse:(id)a0 canShowCallBack:(id /* block */)a1;
- (BOOL)badgeStrategyEnable;
- (void)badgeVerifyAccessWithConfig:(id)a0 task:(id)a1 canShowCallBack:(id /* block */)a2;
- (BOOL)p_canReuseComponentForShowTrackWithCurrentTask:(id)a0 newTask:(id)a1;
- (BOOL)canReUseComponentWithCurTask:(id)a0 newTask:(id)a1;
- (unsigned long long)getReduceReasonWithTask:(id)a0;
- (id)p_generateBadgeJumpTrackParamsWithNewTask:(id)a0;
- (void)trackShowBadgeWithModel:(id)a0;
- (id)getDowngradeTypeTrackStringWithDowngradeType:(long long)a0 reduceReason:(unsigned long long)a1;
- (id)currentTabID;
- (id)getHideTypeTrackString:(long long)a0;
- (BOOL)comparePriorityWithFirstTab:(id)a0 secondTab:(id)a1;
- (id)getDowngradeTypeTrackString:(long long)a0;
- (void)getPizzaPermissionWithPreCheckBadge:(id)a0 tabID:(id)a1 position:(id)a2 precheckCompletion:(id /* block */)a3;
- (id)getBadgeSceneTrackParams;
- (void).cxx_destruct;
- (id)init;

@end
