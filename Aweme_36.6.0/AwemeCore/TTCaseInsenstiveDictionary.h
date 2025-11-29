@class NSMutableDictionary;

@interface TTCaseInsenstiveDictionary : NSMutableDictionary <NSCopying> {
    NSMutableDictionary *inner_dict;
}

- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;

@end
