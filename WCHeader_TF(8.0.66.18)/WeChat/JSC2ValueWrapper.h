@interface JSC2ValueWrapper : NSObject {
    struct OpaqueJSContext { } *_ctx;
}

@property (nonatomic) struct OpaqueJSValue { } *value;

+ (id)valueWithRef:(struct OpaqueJSValue { } *)a0 ctx:(struct OpaqueJSContext { } *)a1;

- (id)initWithValueRef:(struct OpaqueJSValue { } *)a0 ctx:(struct OpaqueJSContext { } *)a1;
- (void)dealloc;

@end
