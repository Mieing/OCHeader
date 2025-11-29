@interface IESECColorManager : NSObject {
    unsigned long long _currentTheme;
    struct shared_ptr<iesec::color_manager_impl> { struct color_manager_impl *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
    struct unordered_map<std::string, std::pair<UIColor *, UIColor *>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::pair<UIColor *, UIColor *>>>> { struct __hash_table<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::pair<UIColor *, UIColor *>>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _color_scheme_map;
}

@property (readonly, nonatomic) unsigned long long effectiveColorTheme;
@property (nonatomic) unsigned long long preferredColorTheme;

+ (id)p_buildColorStatePropertyWithTarget:(id)a0 propertyName:(id)a1 useState:(BOOL)a2 state:(unsigned long long)a3;
+ (void)iesec_colorForTarget:(id)a0 propertyName:(id)a1 color:(id)a2;
+ (void)iesec_colorForTarget:(id)a0 propertyName:(id)a1 color:(id)a2 state:(unsigned long long)a3;
+ (void)iesec_colorForTarget:(id)a0 propertyName:(id)a1 colorName:(id)a2;
+ (void)iesec_colorForTarget:(id)a0 propertyName:(id)a1 colorName:(id)a2 state:(unsigned long long)a3;
+ (void)initialize;
+ (id)sharedManager;

- (id)colorForKey:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
