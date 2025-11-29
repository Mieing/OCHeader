@class NSMutableSet, NSRecursiveLock;

@interface WCFinderRedDotThreadSafeSet : NSObject

@property (retain, nonatomic) NSMutableSet *setContainer;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (id)initWithQueueName:(id)a0;
- (id)initWithQueueName:(id)a0 setCapacity:(long long)a1;
- (void)containerAddObject:(id)a0;
- (void)containerRemoveObject:(id)a0;
- (id)containerMutableCopy;
- (unsigned long long)containerCount;
- (BOOL)containerContainsObject:(id)a0;
- (void)containerEnumerateObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
