@interface TextStateAffDBReporter : NSObject

+ (void)reportAction:(long long)a0;
+ (void)reportAction:(long long)a0 taskType:(long long)a1;
+ (void)reportAction:(long long)a0 taskType:(long long)a1 taskId:(id)a2;
+ (void)reportAction:(long long)a0 taskType:(long long)a1 taskRetryNum:(unsigned int)a2 taskId:(id)a3 TaskUseTimeMs:(unsigned long long)a4 oldDBNum:(unsigned int)a5 transferDBNum:(unsigned int)a6;
+ (void)reportSquareEmpty;

@end
