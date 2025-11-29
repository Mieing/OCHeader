@interface AWEPropAsyncGenerateNetHelper : NSObject

+ (void)cancelTasksWithIds:(id)a0 AITypes:(id)a1;
+ (void)queryWithTasks:(id)a0 scene:(unsigned long long)a1 serverQuerySource:(id)a2 result:(id /* block */)a3;
+ (void)requestWithTasks:(id)a0 scene:(unsigned long long)a1 serverQuerySource:(id)a2 result:(id /* block */)a3;
+ (void)queryAIGCWithTasks:(id)a0 scene:(unsigned long long)a1 serverQuerySource:(id)a2 unFinishedTaskCount:(long long)a3 result:(id /* block */)a4;
+ (void)queryAIMemoriesWithTasks:(id)a0 scene:(unsigned long long)a1 serverQuerySource:(id)a2 result:(id /* block */)a3;
+ (id)p_getQuerySceneWithSceneType:(unsigned long long)a0;
+ (id)p_getTaskIDStringWithTaskList:(id)a0;

@end
