@class NSMutableSet;

@interface IESIMThreadSafeNSMutableSet : NSMutableSet {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _btd_setMutex;
}

@property (retain, nonatomic) NSMutableSet *btd_mutableSet;

+ (BOOL)supportsSecureCoding;

- (void)btd_addObject:(id)a0;
- (id)btd_filter:(id /* block */)a0;
- (id)btd_map:(id /* block */)a0;
- (void)btd_forEach:(id /* block */)a0;
- (void)btd_removeObject:(id)a0;
- (id)btd_compactMap:(id /* block */)a0;
- (BOOL)btd_contains:(id /* block */)a0;
- (id)btd_find:(id /* block */)a0;
- (id)btd_reduce:(id)a0 reducer:(id /* block */)a1;
- (BOOL)btd_all:(id /* block */)a0;
- (void)setupMutex;
- (void)addObject:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (void).cxx_destruct;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)objectEnumerator;
- (id)description;
- (BOOL)isEqualToSet:(id)a0;
- (id)anyObject;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)descriptionWithLocale:(id)a0;
- (void)removeObject:(id)a0;
- (id)init;
- (Class)classForCoder;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)minusSet:(id)a0;
- (void)intersectSet:(id)a0;
- (void)removeAllObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)member:(id)a0;
- (id)initWithSet:(id)a0;
- (void)unionSet:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)objectsPassingTest:(id /* block */)a0;
- (id)allObjects;
- (void)setSet:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (void)dealloc;
- (BOOL)intersectsSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (unsigned long long)count;
- (id)setByAddingObject:(id)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
