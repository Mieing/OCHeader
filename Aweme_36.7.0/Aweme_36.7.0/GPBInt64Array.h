@class GPBMessage;

@interface GPBInt64Array : NSObject <NSCopying> {
    GPBMessage *_autocreator;
    long long *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)arrayWithValueArray:(id)a0;
+ (id)array;
+ (id)arrayWithValue:(long long)a0;

- (id)live_getNumberArray;
- (id)live_sortUsingComparator:(id /* block */)a0;
- (id)timx_array;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(long long)a1;
- (void)removeAll;
- (id)description;
- (void)insertValue:(long long)a0 atIndex:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)addValue:(long long)a0;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (unsigned long long)hash;
- (long long)valueAtIndex:(unsigned long long)a0;
- (id)flatMap:(id /* block */)a0;
- (void)addValuesFromArray:(id)a0;
- (id)initWithValues:(const long long *)a0 count:(unsigned long long)a1;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithValueArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addValues:(const long long *)a0 count:(unsigned long long)a1;

@end
