@interface AFDLocalDataCenterCondition : AFDWCTConditionWrapper

@property (copy, nonatomic) id /* block */ ocCondition;

+ (id)conditionWithFollowStatus:(long long)a0;
+ (id)conditionWithFollowType:(unsigned long long)a0 option:(id)a1;
+ (id)orderWithFollowStatusDescending:(BOOL)a0 needUidAscending:(BOOL)a1;
+ (id)orderWithMutualFollowTime:(BOOL)a0;

- (BOOL)checkModel:(id)a0;
- (BOOL)hasOcCondition;
- (id)initWithConditionBlock:(id /* block */)a0 ocCondition:(id /* block */)a1;
- (void).cxx_destruct;

@end
