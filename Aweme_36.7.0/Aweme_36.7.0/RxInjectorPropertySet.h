@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface RxInjectorPropertySet : NSObject <NSFastEnumeration> {
    NSMutableSet *_propertyNames;
    NSMutableDictionary *_propertyMaps;
}

@property (readonly, nonatomic) Class owningClass;
@property (readonly, nonatomic) NSMutableArray *properties;

+ (id)propertySetWithClass:(Class)a0 propertyNames:(id)a1;
+ (id)propertySetWithClass:(Class)a0 propertyName:(id)a1;

- (id)__initWithClass:(Class)a0 properties:(id)a1 propertyMaps:(id)a2;
- (void)bindProperty:(id)a0 toKey:(id)a1;
- (void)__mergePropertySet:(id)a0;
- (BOOL)__hasProperty:(id)a0;
- (void)__addProperty:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
