@interface IamBizAudioPlayList : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<biz::IamBizAudioPlayListCppCover> { struct IamBizAudioPlayListCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<biz::IamBizAudioPlayListDispatcher> { struct IamBizAudioPlayListDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<biz::IamBizAudioPlayListDispatcher> { struct IamBizAudioPlayListDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)init:(id)a0 createName:(const void *)a1 svrIdentity:(const void *)a2;
- (id)zidlObjToHolder;
- (id)init;
- (void)initWithCategoryItem:(int)a0 categoryItem:(id)a1;
- (void)initWithTingItems:(int)a0 items:(id)a1;
- (void)playFromIndex:(int)a0;
- (int)getType;
- (int)getScene;
- (void)setScene:(int)a0;
- (id)getCategoryId;
- (BOOL)getIsValid;
- (struct optional<NSData *> { union { char x0; id x1; } x0; BOOL x1; })getCategoryItem;
- (BOOL)getIsSingle;
- (BOOL)getUpHasMore;
- (BOOL)getDownHasMore;
- (BOOL)getCanEdit;
- (int)getItemsCount;
- (id)getItem:(int)a0;
- (id)getItems;
- (id)generateTapeItem;
- (void)refresh;
- (void)deleteItem:(int)a0;
- (void)passiveDeleteItem:(int)a0;
- (void)batchDeleteItems:(id)a0 passive:(BOOL)a1;
- (void)moveItem:(int)a0 toIndex:(int)a1;
- (void)loadDownMore;
- (void)loadUpMore;
- (void)subscribeTapeItemUpdatedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeTapeItemUpdatedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeTapeItemUpdatedEvent:(id)a0;
- (void)subscribeTingItemUpdatedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeTingItemUpdatedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeTingItemUpdatedEvent:(id)a0;
- (void)subscribeItemsReloadedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeItemsReloadedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeItemsReloadedEvent:(id)a0;
- (void)subscribeLoadingStatusChangedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeLoadingStatusChangedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeLoadingStatusChangedEvent:(id)a0;
- (void)subscribeLoadMoreSuccessEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeLoadMoreSuccessEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeLoadMoreSuccessEvent:(id)a0;
- (void)subscribeLoadErrorEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeLoadErrorEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeLoadErrorEvent:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
