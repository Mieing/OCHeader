@class NSString;

@interface WAEJBindingWebGLActiveInfo : WAEJBindingBase {
    int size;
    unsigned int type;
    NSString *name;
}

+ (void *)_ptr_to_get_size;
+ (void *)_ptr_to_get_type;
+ (void *)_ptr_to_get_name;
+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 size:(int)a2 type:(unsigned int)a3 name:(id)a4;

- (id)initWithSize:(int)a0 type:(unsigned int)a1 name:(id)a2;
- (void)dealloc;
- (struct OpaqueJSValue { } *)_get_size:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_type:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_name:(struct OpaqueJSContext { } *)a0;

@end
