@class NSMutableDictionary;
@protocol AWETrackerConsumableNode;

@interface AWETrackerDictionary : NSObject <NSMutableCopying, NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (weak) id<AWETrackerConsumableNode> currentNode;
@property (weak) id<AWETrackerConsumableNode> applyNode;
@property (readonly) unsigned long long count;

+ (id)dictionary;
+ (id)initWithCapacity:(unsigned long long)a0;
+ (id)init;
+ (id)dictionaryWithCapacity:(unsigned long long)a0;

- (id)safeObjectForKey:(id)a0 withClass:(Class)a1;
- (void)removeObjectsForKeys:(id)a0;
- (void)setDictionary:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)description;
- (id)objectForKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
