@class NSString, IESECLLContainerBuilder, UIView;

@interface IESECLLView : IESECLLPassthroughView <IESECLLViewLayoutContext, IESECLLComponent> {
    id /* block */ _builderConfigurator;
    IESECLLContainerBuilder *_rootBuilder;
    struct unordered_map<std::string, IESECLLViewHolder *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, IESECLLViewHolder *>>> { struct __hash_table<std::__hash_value_type<std::string, IESECLLViewHolder *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, IESECLLViewHolder *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, IESECLLViewHolder *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, IESECLLViewHolder *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, IESECLLViewHolder *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, IESECLLViewHolder *>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, IESECLLViewHolder *>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, IESECLLViewHolder *>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _viewMap;
    struct shared_ptr<ll::layout_context> { struct layout_context *__ptr_; struct __shared_weak_count *__cntrl_; } _layoutContext;
    struct shared_ptr<ll::layout_computer> { struct layout_computer *__ptr_; struct __shared_weak_count *__cntrl_; } _layoutComputer;
}

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id dataSource;
@property (nonatomic) BOOL delayUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithModel:(id)a0;
- (void)updateLayoutWithBuilder:(id /* block */)a0 dataSource:(id)a1;
- (id)initWithBuilder:(id /* block */)a0 dataSource:(id)a1;
- (void)updateDataSource:(id)a0;
- (id)viewHolderForViewWithIdentifier:(id)a0;
- (struct view_update_result { struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::string, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; } x0; struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::string, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; } x1; id x2; })updateViewMap;
- (void)attachViews;
- (void)updateLayoutWithBuilder:(id /* block */)a0;
- (void)updateLayoutWithBuilder:(id /* block */)a0 dataSource:(id)a1 animated:(BOOL)a2;
- (id)inflateBuilder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBuilder:(id /* block */)a0;
- (void)layoutSubviews;

@end
