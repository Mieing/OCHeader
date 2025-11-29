@interface WAEJBindingWebGLExtensionOES_vertex_array_object : WAEJBindingWebGLExtension

+ (void *)_ptr_to_func_createVertexArrayOES;
+ (void *)_ptr_to_func_deleteVertexArrayOES;
+ (void *)_ptr_to_func_isVertexArrayOES;
+ (void *)_ptr_to_func_bindVertexArrayOES;
+ (id)_const_VERTEX_ARRAY_BINDING_OES;

- (struct OpaqueJSValue { } *)_func_createVertexArrayOES:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_deleteVertexArrayOES:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_isVertexArrayOES:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_bindVertexArrayOES:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;

@end
