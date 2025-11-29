@class NSMutableArray;

@interface AWEBaseDataMutableArray : NSMutableArray

@property (retain, nonatomic) NSMutableArray *feedMutableArray;
@property (retain, nonatomic) NSMutableArray *observers;

- (void)registerForDataObserver:(id)a0;
- (void)deRegisterForDataObserver:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)init;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)notifyObservers;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)count;

@end
