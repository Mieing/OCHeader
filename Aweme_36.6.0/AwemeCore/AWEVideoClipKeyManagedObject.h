@class NSArray, NSMutableDictionary;

@interface AWEVideoClipKeyManagedObject : NSObject

@property (retain, nonatomic) NSMutableDictionary *objectMapDictionary;
@property (copy, nonatomic) id currentKey;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly, copy, nonatomic) NSArray *allValues;

- (void)setObjectAsCurrentForKey:(id)a0;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)currentObject;

@end
