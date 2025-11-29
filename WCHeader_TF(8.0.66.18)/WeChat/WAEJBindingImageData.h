@class WAEJImageData, WAEJTexture;

@interface WAEJBindingImageData : WAEJBindingBase <EJDrawable> {
    struct OpaqueJSValue { } *dataArray;
}

@property (readonly, nonatomic) WAEJImageData *imageData;
@property (readonly, nonatomic) WAEJTexture *texture;

+ (void *)_ptr_to_get_data;
+ (void *)_ptr_to_get_instance;
+ (void *)_ptr_to_get_width;
+ (void *)_ptr_to_get_height;

- (id)initWithImageData:(id)a0;
- (id)initWithContext:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2;
- (void)dealloc;
- (struct OpaqueJSValue { } *)_get_data:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_instance:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_width:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_height:(struct OpaqueJSContext { } *)a0;

@end
