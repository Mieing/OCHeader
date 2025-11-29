@class IESECShopProductsHybridContext;

@interface IESECShopProductsProductCellProvider : NSObject {
    IESECShopProductsHybridContext *_context;
    struct unordered_map<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double, std::hash<HeightCacheKey>, std::equal_to<iesec::shop::hybrid_products::cell_provider::HeightCacheKey>, std::allocator<std::pair<const iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>>> { struct __hash_table<std::__hash_value_type<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>, std::__unordered_map_hasher<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, std::__hash_value_type<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>, std::hash<HeightCacheKey>, std::equal_to<iesec::shop::hybrid_products::cell_provider::HeightCacheKey>>, std::__unordered_map_equal<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, std::__hash_value_type<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>, std::equal_to<iesec::shop::hybrid_products::cell_provider::HeightCacheKey>, std::hash<HeightCacheKey>>, std::allocator<std::__hash_value_type<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<iesec::shop::hybrid_products::cell_provider::HeightCacheKey, double>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _height_cache;
}

+ (id)providerWithHybridContext:(id)a0;
+ (Class)cellClsForType:(unsigned long long)a0;

- (id)makeCellForType:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })itemSizeForGoodsModel:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 forType:(unsigned long long)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
