@class NSString;

@interface IESECLLViewSizeResolver : NSObject <IESECLLViewLayoutContext> {
    struct unordered_map<std::string, IESECLLViewHolder *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, IESECLLViewHolder *>>> { struct __hash_table<std::__hash_value_type<std::string, IESECLLViewHolder *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, IESECLLViewHolder *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, IESECLLViewHolder *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, IESECLLViewHolder *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, IESECLLViewHolder *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, IESECLLViewHolder *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, IESECLLViewHolder *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, IESECLLViewHolder *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _viewMap;
    struct shared_ptr<ll::layout_context> { struct layout_context *__ptr_; struct __shared_weak_count *__cntrl_; } _layoutContext;
    struct shared_ptr<ll::layout_computer> { struct layout_computer *__ptr_; struct __shared_weak_count *__cntrl_; } _layoutComputer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBuilder:(id /* block */)a0 dataSource:(id)a1;
- (id)viewHolderForViewWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBuilder:(id /* block */)a0;

@end
