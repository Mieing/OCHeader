@class TSPKDetectPlanModel, TSPKDetectCondition, TSPKEventData;

@interface TSPKDetectEvent : TSPKBaseEvent

@property (retain, nonatomic) TSPKDetectCondition *condition;
@property (retain, nonatomic) TSPKEventData *eventData;
@property (retain, nonatomic) TSPKDetectPlanModel *detectPlanModel;

- (void).cxx_destruct;
- (id)tag;
- (unsigned long long)taskType;

@end
