@class NSString, NSDictionary;

@interface AWEIMPushConditionChecker : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSDictionary *conditions;

- (void)p_setupConditions:(id)a0;
- (id)checkWithContext:(id)a0 target:(long long)a1;
- (id)checkInfo:(id)a0 withEventContext:(id)a1;
- (id)p_checkTasksWithContext:(id)a0 target:(long long)a1;
- (id)p_execCheckTask:(id)a0 withContext:(id)a1 onThread:(long long)a2;
- (id)initWithType:(long long)a0 conditions:(id)a1 scene:(id)a2;
- (id)batchCheckInfo:(id)a0 withEventContext:(id)a1;
- (void).cxx_destruct;

@end
