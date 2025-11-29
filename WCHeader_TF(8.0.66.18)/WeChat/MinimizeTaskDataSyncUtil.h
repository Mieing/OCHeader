@interface MinimizeTaskDataSyncUtil : NSObject

+ (id)transformAffStarDataToMinimizeTaskData:(id)a0;
+ (id)transformMinimizeTaskDataToAffStarData:(id)a0;
+ (unsigned int)getTaskBizTypeInTaskData:(id)a0;
+ (id)bussinessTypeToBizName:(unsigned int)a0;
+ (unsigned int)bussinessTypeForBizName:(id)a0;
+ (id)notiDelegateClassNameForBizName:(unsigned int)a0;
+ (id)transformMiniTaskToRemoteBizData:(id)a0;
+ (void)transformRemoteBizData:(id)a0 toTaskData:(id)a1;

@end
