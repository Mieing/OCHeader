@class NSMutableArray;

@interface MMFinderLiveRewardComboPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableArray *comboObjectQueue;
@property (copy, nonatomic) id /* block */ comparator;

- (id)init;
- (id)initWithCapacity:(int)a0;
- (BOOL)isEmpty;
- (unsigned long long)size;
- (BOOL)contains:(id)a0;
- (void)clear;
- (void)add:(id)a0;
- (void)remove:(id)a0;
- (id)peek;
- (id)poll;
- (id)toArray;
- (void)insert:(id)a0;
- (void).cxx_destruct;

@end
