@class IESLiveMessageListBaseQueue, IESLiveMessageListBasePriorityQueue, NSString;

@interface IESLiveMessageListIndividualPriorityQueue : IESLiveMessageListBasePriorityQueue <IESLiveMessageListIndividualPriorityQueueProtocol>

@property (retain, nonatomic) IESLiveMessageListBaseQueue *lowPriorityArray;
@property (retain, nonatomic) IESLiveMessageListBaseQueue *middlePriorityArray;
@property (retain, nonatomic) IESLiveMessageListBasePriorityQueue *highPriorityArray;
@property (nonatomic) BOOL enableHighPriorityStratery;
@property (nonatomic) BOOL enableLowPriorityStratery;
@property (nonatomic) long long highPriorityCount;
@property (nonatomic) long long lowPriorityCount;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)popObjectsByStrategyWithCount:(long long)a0 needReverse:(BOOL)a1;
- (long long)personalizedPriorityWithObj:(id)a0;
- (void)pushObject:(id)a0 withIndividualPriority:(int)a1;
- (void).cxx_destruct;
- (id)init;

@end
