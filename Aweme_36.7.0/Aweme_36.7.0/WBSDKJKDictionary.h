@interface WBSDKJKDictionary : NSMutableDictionary <NSCopying, NSMutableCopying, NSFastEnumeration> {
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long mutations;
    struct WBSDKJKHashTableEntry { unsigned long long x0; id x1; id x2; } *entry;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)keyEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;

@end
