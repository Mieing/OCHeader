@class NSMutableArray;
@protocol IESLiveValueChangedDelegate;

@interface IESLiveObservableMutableArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (weak, nonatomic) id<IESLiveValueChangedDelegate> delegate;
@property (readonly) unsigned long long count;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeObject:(id)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)init;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectsInArray:(id)a0;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withObjectsFromArray:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withObjectsFromArray:(id)a1;

@end
