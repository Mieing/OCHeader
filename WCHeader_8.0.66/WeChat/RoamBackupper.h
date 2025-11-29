@interface RoamBackupper : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<affroam::RoamBackupperCppCover> { struct RoamBackupperCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<affroam::RoamBackupperDispatcher> { struct RoamBackupperDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<affroam::RoamBackupperDispatcher> { struct RoamBackupperDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)init:(id)a0 createName:(const void *)a1 svrIdentity:(const void *)a2;
- (id)zidlObjToHolder;
- (id)init;
- (int)initialize:(unsigned long long)a0;
- (id)getPackage;
- (id)newBackupTask:(id)a0;
- (id)newRestoreTask:(id)a0;
- (void)getBackedUpConversationListAsync:(unsigned long long)a0 toTime:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)getBackedUpConversationListAsync:(unsigned long long)a0 toTime:(unsigned long long)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)deleteBackupDataAsync:(id)a0 deleteAll:(BOOL)a1 completion:(id /* block */)a2;
- (void)deleteBackupDataAsync:(id)a0 deleteAll:(BOOL)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)setupAutoBackupEvent:(id)a0;
- (void)stopAutoBackupTimer;
- (void)getMediaIdListAsync:(id)a0 completion:(id /* block */)a1;
- (void)getMediaIdListAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)loadMediaAsync:(id)a0 msgSvrId:(unsigned long long)a1 msgCreateTime:(unsigned long long)a2 mediaId:(id)a3 completion:(id /* block */)a4;
- (void)loadMediaAsync:(id)a0 msgSvrId:(unsigned long long)a1 msgCreateTime:(unsigned long long)a2 mediaId:(id)a3 on:(id)a4 completion:(id /* block */)a5;
- (void)mediaLoaded:(unsigned long long)a0 error:(int)a1;
- (id)getPackageFlags;
- (int)setPackageFlags:(id)a0;
- (unsigned long long)getContinueOnErrorConvCount:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
