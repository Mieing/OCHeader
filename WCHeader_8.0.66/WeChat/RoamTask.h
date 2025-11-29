@interface RoamTask : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<affroam::RoamTaskCppCover> { struct RoamTaskCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<affroam::RoamTaskDispatcher> { struct RoamTaskDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<affroam::RoamTaskDispatcher> { struct RoamTaskDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)init:(id)a0 createName:(const void *)a1 svrIdentity:(const void *)a2;
- (id)zidlObjToHolder;
- (id)init;
- (int)initialize:(id)a0;
- (void)prepareAsync:(id /* block */)a0;
- (void)prepareAsync:(id)a0 completion:(id /* block */)a1;
- (void)startAsync:(id /* block */)a0;
- (void)startAsync:(id)a0 completion:(id /* block */)a1;
- (void)pauseAsync:(id /* block */)a0;
- (void)pauseAsync:(id)a0 completion:(id /* block */)a1;
- (void)resumeAsync:(id /* block */)a0;
- (void)resumeAsync:(id)a0 completion:(id /* block */)a1;
- (void)stopAsync:(id /* block */)a0;
- (void)stopAsync:(id)a0 completion:(id /* block */)a1;
- (id)getInfo;
- (float)getProgress;
- (void)subscribeProgressEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeProgressEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeProgressEvent:(id)a0;
- (void)subscribeStateChangedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeStateChangedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeStateChangedEvent:(id)a0;
- (void)subscribeStateChangedByPackageIdEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeStateChangedByPackageIdEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeStateChangedByPackageIdEvent:(id)a0;
- (void)subscribeConversationCompletedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeConversationCompletedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeConversationCompletedEvent:(id)a0;
- (void)subscribeConversationCompletedByPackageIdEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeConversationCompletedByPackageIdEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeConversationCompletedByPackageIdEvent:(id)a0;
- (void)subscribeTaskCompletedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeTaskCompletedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeTaskCompletedEvent:(id)a0;
- (void)subscribeDowngradeScheduledEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeDowngradeScheduledEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeDowngradeScheduledEvent:(id)a0;
- (void)subscribeDowngradeScheduledByPackageIdEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeDowngradeScheduledByPackageIdEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeDowngradeScheduledByPackageIdEvent:(id)a0;
- (id)getTransferStats;
- (void)subscribeTransferStatsChangedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeTransferStatsChangedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeTransferStatsChangedEvent:(id)a0;
- (void)subscribeProgressAndTransferStatsChangedByPackageIdEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeProgressAndTransferStatsChangedByPackageIdEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeProgressAndTransferStatsChangedByPackageIdEvent:(id)a0;
- (id)getErrorLog;
- (int)clearErrorLog;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
