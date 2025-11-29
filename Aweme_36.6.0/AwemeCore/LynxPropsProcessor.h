@interface LynxPropsProcessor : NSObject

+ (SEL)generateTypeSel:(id)a0;
+ (void)handlePropSetterException:(id)a0 with:(id)a1;
+ (id /* block */)wrapValueConversionWithType:(id)a0 forSetter:(id /* block */)a1;
+ (id)getSetterMapFromComponent:(Class)a0 withPropSetterLookUp:(struct objc_method { } *)a1;
+ (id)getSetterMapFromComponent:(Class)a0;
+ (id)getLynxPropsSetterHolder;
+ (void)extractPropSetterFromComponent:(Class)a0 withName:(id)a1 withPropSetterHolder:(id)a2;
+ (id /* block */)findPropSetterByComponent:(Class)a0 andKey:(id)a1;
+ (void)updateProp:(id)a0 withKey:(id)a1 forUI:(id)a2;
+ (void)updateProp:(id)a0 withKey:(id)a1 forShadowNode:(id)a2;

@end
