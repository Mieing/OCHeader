@class NSMutableArray;

@interface HunterCacheItem : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned long long maxCount;

- (id)getLastObject;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (void)removeLastObject;
- (unsigned long long)count;
- (id)initWithCount:(unsigned long long)a0;

@end
