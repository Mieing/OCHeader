@class WAEJBindingGfx;

@interface WAEJBindingGfxObject : WAEJBindingBase {
    struct _sg_state_t { } *_sg;
    WAEJBindingGfx *_gfx;
    BOOL _invalid;
    unsigned int _objectId;
}

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 gfx:(id)a1 objectId:(unsigned int)a2 sg_state:(struct _sg_state_t { } *)a3;
+ (void *)_ptr_to_func_destroy;
+ (void *)_ptr_to_func_toJSON;

- (id)initWithId:(id)a0 objectId:(unsigned int)a1 sg_state:(struct _sg_state_t { } *)a2;
- (void)dealloc;
- (void)destroy;
- (struct OpaqueJSValue { } *)_func_destroy:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_toJSON:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;

@end
