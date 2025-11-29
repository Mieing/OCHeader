@class WAEJBindingCanvas;

@interface WAEJBindingCanvasStyle : WAEJBindingBase

@property (nonatomic) WAEJBindingCanvas *binding;
@property (readonly, nonatomic) struct OpaqueJSValue { } *jsObject;

+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_set_width;
+ (void *)_ptr_to_get_height;
+ (void *)_ptr_to_set_height;
+ (void *)_ptr_to_get_left;
+ (void *)_ptr_to_set_left;
+ (void *)_ptr_to_get_top;
+ (void *)_ptr_to_set_top;
+ (void *)_ptr_to_get_imageRendering;
+ (void *)_ptr_to_set_imageRendering;

- (struct OpaqueJSValue { } *)_get_width:(struct OpaqueJSContext { } *)a0;
- (void)_set_width:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_get_height:(struct OpaqueJSContext { } *)a0;
- (void)_set_height:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_get_left:(struct OpaqueJSContext { } *)a0;
- (void)_set_left:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_get_top:(struct OpaqueJSContext { } *)a0;
- (void)_set_top:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;
- (struct OpaqueJSValue { } *)_get_imageRendering:(struct OpaqueJSContext { } *)a0;
- (void)_set_imageRendering:(struct OpaqueJSContext { } *)a0 value:(struct OpaqueJSValue { } *)a1 exception:(const struct OpaqueJSValue **)a2;

@end
