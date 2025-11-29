@class NSString, NSMutableArray;

@interface IESLiveLinkSafeMutableArrayV2 : NSObject <IESLiveLinkSafeMutableArrayProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (retain, nonatomic) NSMutableArray *arr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lastObject;
- (id)firstObject;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObject:(id)a0;
- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeLastObject;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)containsObject:(id)a0;
- (id)array;
- (unsigned long long)indexOfObject:(id)a0;
- (void)dealloc;
- (unsigned long long)count;

@end
