@interface MigrationManager : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<affroam::MigrationManagerCppCover> { struct MigrationManagerCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<affroam::MigrationManagerDispatcher> { struct MigrationManagerDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<affroam::MigrationManagerDispatcher> { struct MigrationManagerDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)initWithUsernameCachePath:(id)a0 cachePath:(id)a1;
- (void)unInit;
- (void)reInit:(id)a0 cachePath:(id)a1;
- (BOOL)isInit;
- (id)commonCallSdk:(id)a0 args:(id)a1;
- (void)commonCallSdk2Async:(id)a0 args:(id)a1 completion:(id /* block */)a2;
- (void)commonCallSdk2Async:(id)a0 args:(id)a1 on:(id)a2 completion:(id /* block */)a3;
- (id)getCurrentModels;
- (void)startTaskAsync:(id)a0 completion:(id /* block */)a1;
- (void)startTaskAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)setIsQuickTransfer:(BOOL)a0;
- (void)pauseTaskAsync:(id /* block */)a0;
- (void)pauseTaskAsync:(id)a0 completion:(id /* block */)a1;
- (void)stopTaskAsync:(id /* block */)a0;
- (void)stopTaskAsync:(id)a0 completion:(id /* block */)a1;
- (void)stopByPcNotify;
- (void)markStatus:(id)a0;
- (void)resetTaskInfoAsync:(id /* block */)a0;
- (void)resetTaskInfoAsync:(id)a0 completion:(id /* block */)a1;
- (void)configTaskScene:(id)a0;
- (void)configEmigration:(id)a0;
- (long long)getEstimatedEmigSize;
- (void)saveAuthConfig:(id)a0;
- (id)getAuthConfig;
- (void)startServerAsync:(id /* block */)a0;
- (void)startServerAsync:(id)a0 completion:(id /* block */)a1;
- (void)getServerIpListAsync:(id /* block */)a0;
- (void)getServerIpListAsync:(id)a0 completion:(id /* block */)a1;
- (BOOL)isServerStarted;
- (void)setEnterScene:(int)a0;
- (id)getReportInfoExt;
- (void)subscribeCloseTaskDetailPageEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeCloseTaskDetailPageEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeCloseTaskDetailPageEvent:(id)a0;
- (void)subscribeNotifyTaskProgressEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeNotifyTaskProgressEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeNotifyTaskProgressEvent:(id)a0;
- (void)subscribeNotifyTaskStatusEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeNotifyTaskStatusEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeNotifyTaskStatusEvent:(id)a0;
- (void)subscribeNotifyTaskSceneEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeNotifyTaskSceneEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeNotifyTaskSceneEvent:(id)a0;
- (void)appForegroundStateChanged:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
