@interface IamBizPersonalCenterRedDotManager : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<biz::IamBizPersonalCenterRedDotManagerCppCover> { struct IamBizPersonalCenterRedDotManagerCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<biz::IamBizPersonalCenterRedDotManagerDispatcher> { struct IamBizPersonalCenterRedDotManagerDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<biz::IamBizPersonalCenterRedDotManagerDispatcher> { struct IamBizPersonalCenterRedDotManagerDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getRedDotCountAsync:(int)a0 completion:(id /* block */)a1;
- (void)getRedDotCountAsync:(int)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)getRedDotBufferAsync:(int)a0 completion:(id /* block */)a1;
- (void)getRedDotBufferAsync:(int)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)getCreatorTextRedDotAsync:(id /* block */)a0;
- (void)getCreatorTextRedDotAsync:(id)a0 completion:(id /* block */)a1;
- (void)getCreatorWxaDataAsync:(id /* block */)a0;
- (void)getCreatorWxaDataAsync:(id)a0 completion:(id /* block */)a1;
- (void)cleanRedDot:(int)a0;
- (void)updateRedDotInfo:(BOOL)a0;
- (void)updateFansMsgRedDotCount:(id)a0 count:(int)a1;
- (void)getRedDotEnableAsync:(int)a0 completion:(id /* block */)a1;
- (void)getRedDotEnableAsync:(int)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)setRedDotEnable:(int)a0 enable:(BOOL)a1;
- (void)getRedDotUpdateTimestampAsync:(id /* block */)a0;
- (void)getRedDotUpdateTimestampAsync:(id)a0 completion:(id /* block */)a1;
- (void)subscribeRedDotUpdatedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeRedDotUpdatedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeRedDotUpdatedEvent:(id)a0;
- (void)subscribeCreatorTextRedDotUpdatedEvent:(id)a0 on:(id)a1 eventBlock:(id /* block */)a2;
- (void)subscribeCreatorTextRedDotUpdatedEvent:(id)a0 eventBlock:(id /* block */)a1;
- (void)unsubscribeCreatorTextRedDotUpdatedEvent:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
