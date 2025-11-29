@class TSPKDetectPlanModel, TSPKDetectTrigger;
@protocol TSPKDetectPlanDelegate;

@interface TSPKDetectPlan : NSObject

@property (retain, nonatomic) TSPKDetectPlanModel *model;
@property (retain, nonatomic) TSPKDetectTrigger *detectTrigger;
@property (weak, nonatomic) id<TSPKDetectPlanDelegate> delegate;

- (id)initWithPlanModel:(id)a0;
- (void)initDetectTrigger;
- (void)handleDetectTriggerWithEvent:(id)a0;
- (void)updateWithPlanModel:(id)a0;
- (void).cxx_destruct;

@end
