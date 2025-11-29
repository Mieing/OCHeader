@class NSMutableSet, NSMutableArray;

@interface WCFinderLimitedSet : NSObject

@property (retain, nonatomic) NSMutableSet *set;
@property (retain, nonatomic) NSMutableArray *orderArray;
@property (nonatomic) unsigned long long maxCount;

- (id)initWithMaxCount:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (void)removeOldestObject;
- (void)clearAllObjects;
- (void).cxx_destruct;

@end
