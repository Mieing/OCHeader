@class NSString, NSMutableArray;

@interface IESLiveMessageListPriorityQueue : NSObject <IESLiveMessageListIndividualPriorityQueueProtocol>

@property (retain, nonatomic) NSMutableArray *lowPriorityArray;
@property (retain, nonatomic) NSMutableArray *middlePriorityArray;
@property (retain, nonatomic) NSMutableArray *highPriorityArray;
@property (nonatomic) BOOL enableHighPriorityStratery;
@property (nonatomic) BOOL enableLowPriorityStratery;
@property (nonatomic) long long highPriorityCount;
@property (nonatomic) long long lowPriorityCount;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushObject:(id)a0 withPriority:(long long)a1;
- (id)popObjectsByStrategyWithCount:(long long)a0 needReverse:(BOOL)a1;
- (id)popObjectsInTimeOrderWithCount:(long long)a0 needReverse:(BOOL)a1;
- (double)localTimeStampWith:(id)a0;
- (id)popObjectsInTimeOrderWithArrays:(id)a0 count:(long long)a1;
- (id)popObjectsFromArray:(id)a0 count:(long long)a1;
- (void)pushObject:(id)a0 withIndividualPriority:(int)a1;
- (id)firstObject;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;
- (id)init;
- (id)allObjects;
- (long long)count;

@end
