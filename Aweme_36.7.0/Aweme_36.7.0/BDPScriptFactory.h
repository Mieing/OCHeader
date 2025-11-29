@class BDPThreadSafeDictionary;

@interface BDPScriptFactory : NSObject

@property (class, readonly, nonatomic) BDPThreadSafeDictionary *contextClsMap;
@property (class, readonly, nonatomic) BDPThreadSafeDictionary *valueClsMap;

+ (id)valueWithData:(void *)a0 size:(unsigned long long)a1 inContext:(id)a2;
+ (id)valueWithLEPUSValue:(union LEPUSValue { long long x0; void *x1; double x2; })a0 inContext:(id)a1;
+ (void)registerContextClassWith:(Class)a0 runtimeType:(unsigned long long)a1;
+ (void)registerValueClassWith:(Class)a0 runtimeType:(unsigned long long)a1;
+ (id)valueWithDictionary:(id)a0 inContext:(id)a1;
+ (id)createContextWithType:(unsigned long long)a0;
+ (id)valueClsMap;
+ (id)convertType2String:(long long)a0;
+ (id)contextClsMap;
+ (Class)valueClsForType:(unsigned long long)a0;
+ (id)valueWithDouble:(double)a0 inContext:(id)a1;
+ (id)valueWithJSValueRef:(struct OpaqueJSValue { } *)a0 inContext:(id)a1;
+ (id)valueWithObject:(id)a0 inContext:(id)a1;
+ (id)valueWithInt32:(int)a0 inContext:(id)a1;
+ (id)valueWithUndefinedInContext:(id)a0;
+ (id)valueWithBool:(BOOL)a0 inContext:(id)a1;

@end
