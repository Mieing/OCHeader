@class NSString, NSTimer, NSDictionary, NSMutableArray;

@interface AWEAdCampaignMonitor : NSObject <AWEUserMessage>

@property (retain, nonatomic) NSTimer *appActiveTimer;
@property (retain, nonatomic) NSTimer *appOpenedTimer;
@property (nonatomic) BOOL appOpenedTimeConditionValid;
@property (nonatomic) BOOL appActiveConditionValid;
@property (nonatomic) BOOL shouldReportDAU;
@property (nonatomic) long long vvCount;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (nonatomic) long long validVVCount;
@property (nonatomic) long long validDuration;
@property (nonatomic) long long growthDeepevent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)subscribeToEventReport:(id)a0;
- (id)hookEventList;
- (void)triggerEffectiveDAUIfPossible;
- (void)initVVSDConditionsWithParams:(id)a0;
- (void)storeRouterParams:(id)a0;
- (void)invalidateAppOpenedTimer;
- (void)invalidAppActiveTimer;
- (void)clearVVSDConditions;
- (void)reportValuableLaucnhWithRuleType:(id)a0;
- (void)triggerLoginSucceessIfPossible;
- (BOOL)enableHookEvent;
- (BOOL)reportOutHookEventV3:(id)a0 params:(id)a1;
- (void)startMonitorAppActive:(id)a0;
- (void)registerObserver;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;

@end
