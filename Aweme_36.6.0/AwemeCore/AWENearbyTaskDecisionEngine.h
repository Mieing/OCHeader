@interface AWENearbyTaskDecisionEngine : NSObject

+ (id)sortTasks:(id)a0;
+ (id)triggerCombinationJudgeWithContext:(id)a0;
+ (id)decideAndSortTasks:(id)a0;
+ (id)decideTasks:(id)a0;
+ (BOOL)p_judgeFilterWithExpression:(id)a0 task:(id)a1 context:(id)a2;
+ (BOOL)p_judgeConditionWithData:(id)a0 task:(id)a1 context:(id)a2;
+ (BOOL)p_judgeCombinationWithData:(id)a0 task:(id)a1 context:(id)a2;
+ (BOOL)p_judgeRunCheckWithData:(id)a0 task:(id)a1 context:(id)a2;
+ (id)insertAndSortTask:(id)a0 toTasks:(id)a1;
+ (BOOL)runCheckJudgeWithContext:(id)a0 task:(id)a1 runCheckNode:(id)a2;

@end
