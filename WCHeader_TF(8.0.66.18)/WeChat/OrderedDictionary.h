@class NSMutableDictionary, NSMutableArray;

@interface OrderedDictionary : NSMutableDictionary {
    NSMutableDictionary *dictionary;
    NSMutableArray *array;
}

@property (nonatomic) BOOL disableStrictDebugMode;

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setupWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)copy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (id)allValuesInOrder;
- (id)allValuesInReverseOrder;
- (id)allValuesForKeyEnumerator:(id)a0;
- (id)keyEnumerator;
- (id)reverseKeyEnumerator;
- (void)insertObject:(id)a0 forKey:(id)a1 atIndex:(unsigned long long)a2;
- (id)keyAtIndex:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)firstKey;
- (id)lastKey;
- (id)allKeysInOrder;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (void)setObjectAsLastObject:(id)a0 forKey:(id)a1;
- (void)sortOrderUsingComparator:(id /* block */)a0;
- (void)updateOrderForKey:(id)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;

@end
