@interface ACCRecordFlowStageStrategy : NSObject

@property (nonatomic) long long touchBeganAction;
@property (nonatomic) long long holdBeganAction;
@property (nonatomic) long long touchEndedAction;
@property (nonatomic) unsigned long long flowType;

- (BOOL)canStart:(id)a0;
- (BOOL)canStop:(id)a0;
- (void)logComplete:(id)a0;
- (void)logStart:(id)a0;
- (void)logStop:(id)a0;
- (long long)actionWithStage:(long long)a0;

@end
