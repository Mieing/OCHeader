@class IESLiveMessageListBaseQueue, IESLiveMessageListBasePriorityQueue;

@interface IESLiveMessageListFoldPriorityQueue : IESLiveMessageListBasePriorityQueue

@property (retain, nonatomic) IESLiveMessageListBaseQueue *normalPriorityArray;
@property (retain, nonatomic) IESLiveMessageListBasePriorityQueue *highPriorityArray;
@property (nonatomic) long long highPriorityCount;

- (void)pushObject:(id)a0 withPriority:(long long)a1;
- (id)popObjectsByStrategyWithCount:(long long)a0 needReverse:(BOOL)a1;
- (long long)personalizedPriorityWithObj:(id)a0;
- (id)popFoldObjectsByStrategyWithCount:(long long)a0 needReverse:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
