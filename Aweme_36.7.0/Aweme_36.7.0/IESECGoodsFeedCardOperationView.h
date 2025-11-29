@class IESECLLView, IESECGoodsDetailParameters, IESECGoodsFeedActionButton, IESECGoodsFeedCardOperationViewConfiguration, IESECButton;
@protocol IESECGoodsFeedCardOperationViewDelegate;

@interface IESECGoodsFeedCardOperationView : UIView {
    IESECGoodsFeedCardOperationViewConfiguration *_configuration;
    IESECGoodsDetailParameters *_parameters;
    IESECLLView *_contentView;
    IESECButton *_addToShoppingCartButton;
    IESECGoodsFeedActionButton *_buyButton;
}

@property (weak, nonatomic) id<IESECGoodsFeedCardOperationViewDelegate> delegate;

- (id)itemWithType:(unsigned long long)a0;
- (void)updateWithParameters:(id)a0;
- (void)handleOperationItemGesture:(id)a0;
- (void)operationItemDidSelect:(id)a0;
- (id /* block */)contentViewBuilder;
- (struct unordered_map<IESECGoodsFeedCardOperationItemType, card_item, std::hash<IESECGoodsFeedCardOperationItemType>, std::equal_to<IESECGoodsFeedCardOperationItemType>, std::allocator<std::pair<const IESECGoodsFeedCardOperationItemType, card_item>>> { struct __hash_table<std::__hash_value_type<IESECGoodsFeedCardOperationItemType, card_item>, std::__unordered_map_hasher<IESECGoodsFeedCardOperationItemType, std::__hash_value_type<IESECGoodsFeedCardOperationItemType, card_item>, std::hash<IESECGoodsFeedCardOperationItemType>, std::equal_to<IESECGoodsFeedCardOperationItemType>>, std::__unordered_map_equal<IESECGoodsFeedCardOperationItemType, std::__hash_value_type<IESECGoodsFeedCardOperationItemType, card_item>, std::equal_to<IESECGoodsFeedCardOperationItemType>, std::hash<IESECGoodsFeedCardOperationItemType>>, std::allocator<std::__hash_value_type<IESECGoodsFeedCardOperationItemType, card_item>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<IESECGoodsFeedCardOperationItemType, card_item>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<IESECGoodsFeedCardOperationItemType, card_item>, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<IESECGoodsFeedCardOperationItemType, card_item>, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<std::__hash_value_type<IESECGoodsFeedCardOperationItemType, card_item>, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })cardItemMap;
- (struct card_item { id x0; id x1; id x2; id x3; })cardItemForType:(unsigned long long)a0;
- (void)updateItemTitle:(id)a0 withType:(unsigned long long)a1;
- (id)initWithConfiguration:(id)a0 parameters:(id)a1;
- (void)updateItemTitleWithMap:(id)a0;
- (void)updateItemButtonState:(id)a0 withType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)buttonWithType:(unsigned long long)a0;
- (void)setupSubviews;

@end
