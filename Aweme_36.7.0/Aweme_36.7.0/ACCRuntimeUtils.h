@interface ACCRuntimeUtils : NSObject

+ (void)enumerateIvarsUsingBlock:(id /* block */)a0 withClass:(Class)a1;
+ (id)classToIvarNamesWithClass:(Class)a0;
+ (id)propertyValuesWithObject:(id)a0;
+ (id)ivarNameToClassMapWithClass:(Class)a0;

@end
