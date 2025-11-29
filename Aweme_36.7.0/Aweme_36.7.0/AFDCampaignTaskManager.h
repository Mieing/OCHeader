@class NSMutableDictionary, AFDCampaignSettingsModel, NSMutableSet, NSString, UIViewController;

@interface AFDCampaignTaskManager : NSObject <AWEUserMessage, AFDCampaignTaskManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *tasksMetaData;
@property (retain, nonatomic) NSMutableSet *taskInstances;
@property (weak, nonatomic) UIViewController *mainVenue;
@property (retain, nonatomic) AFDCampaignSettingsModel *settings;
@property (nonatomic) BOOL initialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)registerTaskClass:(Class)a0;
- (void)publishEvent:(id)a0 params:(id)a1;
- (id)addTaskWithParams:(id)a0 allowedTopics:(id)a1;
- (id)taskOfTopic:(id)a0;
- (void)removeTaskOfTopic:(id)a0;
- (id)restoreTaskOfTopic:(id)a0;
- (void)p_assignTaskInstance:(id)a0 toMetaData:(id)a1;
- (void)saveTaskOfTopic:(id)a0;
- (id)addTaskWithParams:(id)a0 allowedTopics:(id)a1 host:(id)a2;
- (id)addTaskWithContext:(id)a0;
- (id)currentTasks;
- (void)removeTasksOfTopics:(id)a0;
- (void)removeTasksOfHost:(id)a0;
- (void)backToMainVenueOfURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
