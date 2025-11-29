@class NSString;

@interface AWEIMGroupSPConversationTaskController : NSObject

@property (readonly, copy, nonatomic) NSString *conversationID;

- (BOOL)isDowngrade;
- (id)getTaskModels;
- (id)asyncGetTaskModels;
- (id)taskModelWithTaskID:(id)a0;
- (id)asyncGetTaskModelWithTaskID:(id)a0;
- (id)asyncGetTaskModelIncludeInvalidTaskWithTaskID:(id)a0;
- (id)tasksWithType:(long long)a0;
- (id)getLatestIsRunningTaskWithType:(long long)a0;
- (id)pullTasksInfoFromServerWithContext:(id)a0;
- (void)receiveTaskCommand:(id)a0;
- (id)updateLocalExtOfTask:(id)a0 withKey:(id)a1 value:(id)a2;
- (id)getNearestRedPacketRainTask;
- (id)notifyTasksResortByReason:(id)a0;
- (id)refreshValidTasksByReason:(id)a0;
- (id)addLocalTask:(id)a0;
- (void)__insertRewardPopupWithTaskCommandModel:(id)a0;
- (void).cxx_destruct;
- (void)addObserver;
- (void)removeObserver;
- (id)initWithConversationID:(id)a0;

@end
