@interface IamBizPersonalCenterManager : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<biz::IamBizPersonalCenterManagerCppCover> { struct IamBizPersonalCenterManagerCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<biz::IamBizPersonalCenterManagerDispatcher> { struct IamBizPersonalCenterManagerDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<biz::IamBizPersonalCenterManagerDispatcher> { struct IamBizPersonalCenterManagerDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)fetchAcctMessagesAsync:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchAcctMessagesAsync:(BOOL)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)getPersonalCenterBizAsync:(id /* block */)a0;
- (void)getPersonalCenterBizAsync:(id)a0 completion:(id /* block */)a1;
- (id)getPersonalCenterBizSync;
- (void)getPersonalCenterCacheAsync:(id /* block */)a0;
- (void)getPersonalCenterCacheAsync:(id)a0 completion:(id /* block */)a1;
- (void)getShowFailedRedDotAsync:(id /* block */)a0;
- (void)getShowFailedRedDotAsync:(id)a0 completion:(id /* block */)a1;
- (void)clearPersonalCenterBizCache;
- (void)setMiniAppVersionType:(int)a0;
- (void)updateEnterProfileTimestamp;
- (void)getMiniAppVersionTypeAsync:(id /* block */)a0;
- (void)getMiniAppVersionTypeAsync:(id)a0 completion:(id /* block */)a1;
- (void)onReceiveCreationCenterPush:(id)a0;
- (void)updateBizIdentityAsync:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateBizIdentityAsync:(BOOL)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)subscribeBizClearedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeBizClearedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeBizClearedEvent:(id)a0;
- (void)subscribeLoginSuccessEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeLoginSuccessEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeLoginSuccessEvent:(id)a0;
- (void)subscribeUnregisteredRedDotChangedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeUnregisteredRedDotChangedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeUnregisteredRedDotChangedEvent:(id)a0;
- (void)getUnregisteredRedDotAsync:(id /* block */)a0;
- (void)getUnregisteredRedDotAsync:(id)a0 completion:(id /* block */)a1;
- (void)clearUnregisteredRedDot;
- (void)subscribeFailedRedDotChangedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeFailedRedDotChangedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeFailedRedDotChangedEvent:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
