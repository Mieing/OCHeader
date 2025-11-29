@interface ObjcRuntimeUtil : NSObject

+ (BOOL)isClass:(Class)a0 inheritsFromClass:(Class)a1;
+ (struct objc_method_description { SEL x0; char *x1; } *)wcvmProtocolCopyMethodDescriptionList:(id)a0 requiredMethod:(BOOL)a1 instanceMethod:(BOOL)a2 outCount:(unsigned int *)a3;
+ (struct vector<objc_method_description, std::allocator<objc_method_description>> { struct objc_method_description *x0; struct objc_method_description *x1; struct __compressed_pair<objc_method_description *, std::allocator<objc_method_description>> { struct objc_method_description *x0; } x2; })getAllMethodOfProtocol:(id)a0;

@end
