@class NSMutableDictionary, NSRecursiveLock;

@interface BDPObjectReusePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *unusedObjectmap;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) long long capacity;
@property (nonatomic) long long count;

+ (id)poolWithCapacity:(long long)a0;

- (void)reciveMemoryWarningNotification:(id)a0;
- (id)popObjectWithIdentifier:(id)a0;
- (void)removeAllObject;
- (BOOL)recycleObject:(id)a0 identifierNoReusableLimit:(BOOL)a1;
- (void)removeObjectsWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapacity:(long long)a0;
- (void)removeObject:(id)a0;
- (BOOL)recycleObject:(id)a0;
- (void)dealloc;

@end
