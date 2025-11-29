@class GPBMessage;

@interface GPBUInt32Array : NSObject <NSCopying> {
    GPBMessage *_autocreator;
    unsigned int *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)arrayWithValueArray:(id)a0;
+ (id)array;
+ (id)arrayWithValue:(unsigned int)a0;

- (void)removeValueAtIndex:(unsigned long long)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(unsigned int)a1;
- (void)removeAll;
- (id)description;
- (void)insertValue:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void)addValue:(unsigned int)a0;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (unsigned long long)hash;
- (unsigned int)valueAtIndex:(unsigned long long)a0;
- (void)addValuesFromArray:(id)a0;
- (id)initWithValues:(const unsigned int *)a0 count:(unsigned long long)a1;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithValueArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addValues:(const unsigned int *)a0 count:(unsigned long long)a1;

@end
