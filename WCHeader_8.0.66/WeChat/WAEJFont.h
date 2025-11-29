@class NSCache, NSMutableArray;

@interface WAEJFont : NSObject {
    NSMutableArray *textures;
    float txLineX;
    float txLineY;
    float txLineH;
    BOOL useSingleGlyphTextures;
    float pointSize;
    float ascent;
    float descent;
    float leading;
    float contentScale;
    float glyphPadding;
    float xHeight;
    BOOL fill;
    float lineWidth;
    struct __CTFont { } *ctMainFont;
    unsigned short *glyphsBuffer;
    struct CGPoint { double x0; double x1; } *positionsBuffer;
    long long *indexBuffer;
    NSCache *layoutCache;
    BOOL isWgfxMode;
    struct unordered_map<unsigned long long, EJFontGlyphInfo, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, EJFontGlyphInfo>>> { struct __hash_table<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, EJFontGlyphInfo>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } glyphInfoMap;
    float lineHeight;
}

+ (struct OpaqueJSValue { } *)loadFontData:(struct OpaqueJSContext { } *)a0 fontData:(id)a1;

- (id)initWithDescriptor:(id)a0 fill:(BOOL)a1 lineWidth:(float)a2 contentScale:(float)a3 isWgfxMode:(BOOL)a4;
- (void)dealloc;
- (unsigned short)createGlyph:(unsigned short)a0 unicode:(unsigned long long)a1 withFont:(struct __CTFont { } *)a2;
- (BOOL)isEmoji:(id)a0;
- (id)getLayoutForString:(id)a0;
- (id)getTextures;
- (float)getYOffsetForBaseline:(int)a0;
- (void)drawString:(id)a0 toContext:(id)a1 x:(float)a2 y:(float)a3;
- (struct { float x0; float x1; float x2; })measureString:(id)a0 forContext:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
