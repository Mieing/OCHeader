@class NSMutableDictionary, AWENearbyTaskCenter, NSString, AWENearbyTaskCommonContext, AWENearbyTaskStateManager;

@interface AWENearbyTaskServiceImpl : NSObject <AWENearbyTaskService>

@property (retain, nonatomic) AWENearbyTaskCenter *taskCenter;
@property (retain, nonatomic) AWENearbyTaskCommonContext *commonContext;
@property (retain, nonatomic) AWENearbyTaskStateManager *stateManager;
@property (retain, nonatomic) NSMutableDictionary *timers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trigger:(id)a0;
- (id)initWithPageType:(long long)a0;
- (void)onShowComponentWithType:(id)a0 componentID:(id)a1 coldStartLimited:(BOOL)a2;
- (void)onHideComponentWithType:(id)a0 componentID:(id)a1;
- (void)trigger:(id)a0 triggerSource:(id)a1;
- (void)commitTask:(id)a0;
- (id)parseTaskWithConfig:(id)a0;
- (void)commitTasks:(id)a0;
- (BOOL)canComponentShowWithType:(id)a0 componentID:(id)a1;
- (void)addActionForKey:(id)a0 value:(id /* block */)a1;
- (void)revertTasksWithConfig:(id)a0;
- (long long)componentShowStateWithType:(id)a0 componentID:(id)a1;
- (BOOL)isColdStartShowLimited;
- (void)commitTask:(id)a0 needTrigger:(BOOL)a1;
- (void)revertTaskWithKey:(id)a0;
- (id)getCommonContext;
- (BOOL)requestComponentShowWithType:(id)a0 componentID:(id)a1 coldStartLimited:(BOOL)a2;
- (void)addBasicUiComponentKey;
- (id)parseTaskWithConfigString:(id)a0;
- (void)revertTasksWithConfigString:(id)a0;
- (void).cxx_destruct;

@end
