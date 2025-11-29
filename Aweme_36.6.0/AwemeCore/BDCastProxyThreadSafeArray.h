@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDCastProxyThreadSafeArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)allObjects;
- (void)removeObjectsInArray:(id)a0;
- (unsigned long long)count;
- (id)popFirstObject;

@end
