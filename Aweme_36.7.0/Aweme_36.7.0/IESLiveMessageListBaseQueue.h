@class NSString, NSMutableArray;

@interface IESLiveMessageListBaseQueue : NSObject <IESLiveMessageListPriorityQueueProtocol>

@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushObject:(id)a0 withPriority:(long long)a1;
- (id)popObjectsByStrategyWithCount:(long long)a0 needReverse:(BOOL)a1;
- (id)popObjectsInTimeOrderWithCount:(long long)a0 needReverse:(BOOL)a1;
- (id)firstObject;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;
- (id)init;
- (id)allObjects;
- (long long)count;
- (void)pushObject:(id)a0;

@end
