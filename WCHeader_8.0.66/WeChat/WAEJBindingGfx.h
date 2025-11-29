@class WAEJCanvasContextWebGL;
@protocol EJDrawableHandler;

@interface WAEJBindingGfx : WAEJBindingBase {
    WAEJCanvasContextWebGL *renderingContext;
    struct GfxHandler { void /* function */ **_vptr$IGfxHandler; id<EJDrawableHandler> delegate; unsigned int current_buffer_id_; struct unordered_map<int, _NativeBuffer, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, _NativeBuffer>>> { struct __hash_table<std::__hash_value_type<int, _NativeBuffer>, std::__unordered_map_hasher<int, std::__hash_value_type<int, _NativeBuffer>, std::hash<int>, std::equal_to<int>>, std::__unordered_map_equal<int, std::__hash_value_type<int, _NativeBuffer>, std::equal_to<int>, std::hash<int>>, std::allocator<std::__hash_value_type<int, _NativeBuffer>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<int, _NativeBuffer>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<int, std::__hash_value_type<int, _NativeBuffer>, std::hash<int>, std::equal_to<int>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<int, std::__hash_value_type<int, _NativeBuffer>, std::equal_to<int>, std::hash<int>>> { float __value_; } __p3_; } __table_; } native_buffers_; } _handler;
    struct _sg_state_t { BOOL x0; unsigned int x1; struct sg_context { unsigned int x0; } x2; struct sg_pass { unsigned int x0; } x3; struct sg_pipeline { unsigned int x0; } x4; BOOL x5; BOOL x6; BOOL x7; struct { struct { int x0; int x1; unsigned int *x2; int *x3; } x0; struct { int x0; int x1; unsigned int *x2; int *x3; } x1; struct { int x0; int x1; unsigned int *x2; int *x3; } x2; struct { int x0; int x1; unsigned int *x2; int *x3; } x3; struct { int x0; int x1; unsigned int *x2; int *x3; } x4; struct { int x0; int x1; unsigned int *x2; int *x3; } x5; struct *x6; struct *x7; struct *x8; struct *x9; struct *x10; struct *x11; } x8; struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; struct *x5; struct *x6; struct sg_pass { unsigned int x0; } x7; struct { struct sg_depth_stencil_state { struct sg_stencil_state { int x0; int x1; int x2; int x3; } x0; struct sg_stencil_state { int x0; int x1; int x2; int x3; } x1; int x2; BOOL x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } x0; struct sg_blend_state { BOOL x0; int x1; int x2; int x3; int x4; int x5; int x6; unsigned char x7; int x8; int x9; int x10; float x11[4]; } x1; struct sg_rasterizer_state { BOOL x0; int x1; int x2; int x3; float x4; float x5; float x6; } x2; BOOL x3; struct { struct { char x0; char x1; unsigned char x2; unsigned char x3; unsigned char x4; int x5; unsigned int x6; } x0; unsigned int x1; } x4[16]; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; struct *x10; struct sg_pipeline { unsigned int x0; } x11; } x8; BOOL x9[18]; BOOL x10; int x11; } x9; BOOL x10; BOOL x11; void *x12; } *_sg;
    struct map<unsigned long long, OpaqueJSValue *, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, OpaqueJSValue *>>> { struct __tree<std::__value_type<unsigned long long, OpaqueJSValue *>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, OpaqueJSValue *>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, OpaqueJSValue *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, OpaqueJSValue *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, OpaqueJSValue *>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _textureIndexToGfxHandler;
}

+ (void *)_ptr_to_func_createNativeBuffer;
+ (void *)_ptr_to_func_makePass;
+ (void *)_ptr_to_func_makeBuffer;
+ (void *)_ptr_to_func_updateBuffer;
+ (void *)_ptr_to_func_makeShader;
+ (void *)_ptr_to_func_makeImage;
+ (void *)_ptr_to_func_updateImage;
+ (void *)_ptr_to_func_makePipeline;
+ (void *)_ptr_to_func_beginDefaultPass;
+ (void *)_ptr_to_func_beginPass;
+ (void *)_ptr_to_func_applyPipeline;
+ (void *)_ptr_to_func_applyBindings;
+ (void *)_ptr_to_func_applyUniforms;
+ (void *)_ptr_to_func_applyViewport;
+ (void *)_ptr_to_func_applyScissorRect;
+ (void *)_ptr_to_func_draw;
+ (void *)_ptr_to_func_endPass;
+ (void *)_ptr_to_func_commit;
+ (void *)_ptr_to_func_queryFeatures;
+ (void *)_ptr_to_func_queryGlyphBitmapInfo;
+ (void *)_ptr_to_func_queryPassState;
+ (void *)_ptr_to_func_queryBufferState;
+ (void *)_ptr_to_func_queryImageState;
+ (void *)_ptr_to_func_queryShaderState;
+ (void *)_ptr_to_func_queryPipelineState;
+ (void *)_ptr_to_func_decodeImage;

- (struct _sg_state_t { BOOL x0; unsigned int x1; struct sg_context { unsigned int x0; } x2; struct sg_pass { unsigned int x0; } x3; struct sg_pipeline { unsigned int x0; } x4; BOOL x5; BOOL x6; BOOL x7; struct { struct { int x0; int x1; unsigned int *x2; int *x3; } x0; struct { int x0; int x1; unsigned int *x2; int *x3; } x1; struct { int x0; int x1; unsigned int *x2; int *x3; } x2; struct { int x0; int x1; unsigned int *x2; int *x3; } x3; struct { int x0; int x1; unsigned int *x2; int *x3; } x4; struct { int x0; int x1; unsigned int *x2; int *x3; } x5; struct *x6; struct *x7; struct *x8; struct *x9; struct *x10; struct *x11; } x8; struct { BOOL x0; BOOL x1; BOOL x2; int x3; int x4; struct *x5; struct *x6; struct sg_pass { unsigned int x0; } x7; struct { struct sg_depth_stencil_state { struct sg_stencil_state { int x0; int x1; int x2; int x3; } x0; struct sg_stencil_state { int x0; int x1; int x2; int x3; } x1; int x2; BOOL x3; BOOL x4; unsigned char x5; unsigned char x6; unsigned char x7; } x0; struct sg_blend_state { BOOL x0; int x1; int x2; int x3; int x4; int x5; int x6; unsigned char x7; int x8; int x9; int x10; float x11[4]; } x1; struct sg_rasterizer_state { BOOL x0; int x1; int x2; int x3; float x4; float x5; float x6; } x2; BOOL x3; struct { struct { char x0; char x1; unsigned char x2; unsigned char x3; unsigned char x4; int x5; unsigned int x6; } x0; unsigned int x1; } x4[16]; unsigned int x5; unsigned int x6; int x7; unsigned int x8; unsigned int x9; struct *x10; struct sg_pipeline { unsigned int x0; } x11; } x8; BOOL x9[18]; BOOL x10; int x11; } x9; BOOL x10; BOOL x11; void *x12; } *)get_sg_state;
- (void *)get_sg_state_cpp;
- (id)initWithRenderingContext:(id)a0 options:(id)a1;
- (void)createWithJSObject:(struct OpaqueJSValue { } *)a0 scriptView:(id)a1;
- (void)dealloc;
- (struct OpaqueJSValue { } *)_func_createNativeBuffer:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_makePass:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_makeBuffer:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_updateBuffer:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_makeShader:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_makeImage:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_updateImage:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_makePipeline:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_beginDefaultPass:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_beginPass:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_applyPipeline:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_applyBindings:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_applyUniforms:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_applyViewport:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_applyScissorRect:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_draw:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_endPass:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_commit:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_queryFeatures:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_queryGlyphBitmapInfo:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_queryPassState:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_queryBufferState:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_queryImageState:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_queryShaderState:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_queryPipelineState:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (struct OpaqueJSValue { } *)_func_decodeImage:(struct OpaqueJSContext { } *)a0 argc:(unsigned long long)a1 argv:(const struct OpaqueJSValue **)a2 exception:(const struct OpaqueJSValue **)a3;
- (void)loadPixelsFromCGImage:(struct CGImage { } *)a0 dst:(void *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
