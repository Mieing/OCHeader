@class NSArray, NSMutableArray;

@interface BDPQueue : NSObject

@property (retain, nonatomic) NSMutableArray *enqueueStack;
@property (retain, nonatomic) NSMutableArray *dequeueStack;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;

- (void)emptyQueue;
- (void)insertObjectToHead:(id)a0;
- (void)insertObjectsToHead:(id)a0;
- (void)insertObject:(id)a0 toIndex:(unsigned long long)a1;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)dequeueObject;
- (void)removeObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)removeLastObject;
- (void)enqueueObjectsFromArray:(id)a0;
- (id)removeObjectAtIndex:(unsigned long long)a0;
- (void)enqueueObject:(id)a0;

@end
