@class NSMutableArray;
@protocol IESLivePublicScreenMonitorProtocol;

@interface IESLiveMessageListValuePriorityQueue : NSObject

@property (retain, nonatomic) NSMutableArray *lowPriorityArray;
@property (retain, nonatomic) NSMutableArray *middlePriorityArray;
@property (retain, nonatomic) NSMutableArray *highPriorityArray;
@property (nonatomic) double expireTime;
@property (nonatomic) long long highPriorityArrayMaxCount;
@property (nonatomic) long long middlePriorityArrayMaxCount;
@property (nonatomic) long long lowPriorityArrayMaxCount;
@property (retain, nonatomic) id<IESLivePublicScreenMonitorProtocol> monitor;

- (void)pushObject:(id)a0 withPriority:(int)a1;
- (double)localTimeStampWith:(id)a0;
- (id)popObjectsFromArray:(id)a0 count:(long long)a1;
- (void)recordObjectDiscard:(id)a0 withState:(unsigned long long)a1;
- (id)popObjectsFromArrays:(id)a0 count:(long long)a1;
- (id)popObjectsByStrategyWithHighPCount:(long long)a0 middlePCount:(long long)a1 lowPCount:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;
- (id)init;
- (id)allObjects;
- (long long)count;

@end
