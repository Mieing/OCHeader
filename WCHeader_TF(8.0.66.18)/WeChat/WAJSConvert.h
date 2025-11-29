@interface WAJSConvert : NSObject

+ (struct OpaqueJSValue { } *)jsObjectMakeArrayBufferWithData:(id)a0 context:(struct OpaqueJSContext { } *)a1 shared:(BOOL)a2;
+ (id)getDataWithArrayBuffer:(struct OpaqueJSValue { } *)a0 context:(struct OpaqueJSContext { } *)a1;
+ (void *)getDataWithArrayBuffer:(struct OpaqueJSValue { } *)a0 length:(unsigned long long *)a1 context:(struct OpaqueJSContext { } *)a2;
+ (struct OpaqueJSValue { } *)compatible_jsObjectMakeArrayBufferWithData:(id)a0 context:(struct OpaqueJSContext { } *)a1;
+ (id)compatible_getDataWithArrayBuffer:(struct OpaqueJSValue { } *)a0 context:(struct OpaqueJSContext { } *)a1;
+ (void)jsObjectSetArrayBuffer:(struct OpaqueJSValue { } *)a0 withData:(id)a1 context:(struct OpaqueJSContext { } *)a2;

@end
