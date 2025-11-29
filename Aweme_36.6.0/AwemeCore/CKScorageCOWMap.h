@class NSMapTable;

@interface CKScorageCOWMap : NSObject <NSMutableCopying, NSFastEnumeration> {
    unsigned long long _keyOptions;
    unsigned long long _valueOptions;
    BOOL _needCopy;
}

@property (retain, nonatomic) NSMapTable *mapTable;
@property (readonly) unsigned long long count;

+ (id)strongToStrongMap;
+ (id)weakToStrongMap;

- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)deepCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
