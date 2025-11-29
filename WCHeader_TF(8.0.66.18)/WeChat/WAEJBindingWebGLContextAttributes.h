@interface WAEJBindingWebGLContextAttributes : WAEJBindingBase

@property (nonatomic) BOOL _mAlpha;
@property (nonatomic) BOOL _mDepth;
@property (nonatomic) BOOL _mStencil;
@property (nonatomic) BOOL _mAntialias;
@property (nonatomic) BOOL _mPremultipliedAlpha;
@property (nonatomic) BOOL _mPreserveDrawingBuffer;

+ (void *)_ptr_to_get_alpha;
+ (void *)_ptr_to_get_depth;
+ (void *)_ptr_to_get_stencil;
+ (void *)_ptr_to_get_antialias;
+ (void *)_ptr_to_get_premultipliedAlpha;
+ (void *)_ptr_to_get_preserveDrawingBuffer;

- (struct OpaqueJSValue { } *)_get_alpha:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_depth:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_stencil:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_antialias:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_premultipliedAlpha:(struct OpaqueJSContext { } *)a0;
- (struct OpaqueJSValue { } *)_get_preserveDrawingBuffer:(struct OpaqueJSContext { } *)a0;

@end
