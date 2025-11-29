@class NSString;

@interface WAEJBindingFileReader : WAEJBindingEventedBase {
    NSString *encoding;
    unsigned int workerId;
}

+ (void *)_ptr_to_func_read;
+ (struct OpaqueJSValue { } *)makeReadFileResult:(struct OpaqueJSContext { } *)a0 data:(id)a1 encoding:(id)a2;
+ (id)hexStringFromData:(id)a0;
+ (id)stringFromByte:(unsigned char)a0;
+ (void *)_ptr_to_get_onread;
+ (void *)_ptr_to_set_onread;
+ (void *)_ptr_to_get_onerror;
+ (void *)_ptr_to_set_onerror;

- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_func_read:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (void)readFileComplete:(id)a0 error:(id)a1;

@end
