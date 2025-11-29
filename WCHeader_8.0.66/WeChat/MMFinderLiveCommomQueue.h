@class NSMutableArray;

@interface MMFinderLiveCommomQueue : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) unsigned long long size;

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)init;
- (id)front;
- (id)back;
- (void)push:(id)a0;
- (id)pop;
- (void)removeObjectsInArray:(id)a0;
- (void).cxx_destruct;

@end
