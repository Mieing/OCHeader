@interface ChatbotDeviceNative2CPPCaller : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<chatbot::ChatbotDeviceNative2CPPCallerCppCover> { struct ChatbotDeviceNative2CPPCallerCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<chatbot::ChatbotDeviceNative2CPPCallerDispatcher> { struct ChatbotDeviceNative2CPPCallerDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<chatbot::ChatbotDeviceNative2CPPCallerDispatcher> { struct ChatbotDeviceNative2CPPCallerDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)audioStartStatusAsync:(id)a0 isSucc:(BOOL)a1 errCode:(int)a2 isRecordMode:(BOOL)a3 isStarting:(BOOL)a4 isFullDuplex:(BOOL)a5 completion:(id /* block */)a6;
- (void)audioStartStatusAsync:(id)a0 isSucc:(BOOL)a1 errCode:(int)a2 isRecordMode:(BOOL)a3 isStarting:(BOOL)a4 isFullDuplex:(BOOL)a5 on:(id)a6 completion:(id /* block */)a7;
- (void)updateMicStatusAsync:(id)a0 isOpen:(BOOL)a1 roomScene:(int)a2 uiState:(int)a3 isFullDuplex:(BOOL)a4 switchToFullDuplex:(BOOL)a5 transferCtx:(id)a6 completion:(id /* block */)a7;
- (void)updateMicStatusAsync:(id)a0 isOpen:(BOOL)a1 roomScene:(int)a2 uiState:(int)a3 isFullDuplex:(BOOL)a4 switchToFullDuplex:(BOOL)a5 transferCtx:(id)a6 on:(id)a7 completion:(id /* block */)a8;
- (void)updateVideoStatusAsync:(id)a0 openScene:(int)a1 isStarting:(BOOL)a2 isSucc:(BOOL)a3 completion:(id /* block */)a4;
- (void)updateVideoStatusAsync:(id)a0 openScene:(int)a1 isStarting:(BOOL)a2 isSucc:(BOOL)a3 on:(id)a4 completion:(id /* block */)a5;
- (void)updateNetworkTypeAsync:(int)a0 ispInfo:(id)a1 simtype:(int)a2 completion:(id /* block */)a3;
- (void)updateNetworkTypeAsync:(int)a0 ispInfo:(id)a1 simtype:(int)a2 on:(id)a3 completion:(id /* block */)a4;
- (void)cleanAudioPlayBufferAsync:(id /* block */)a0;
- (void)cleanAudioPlayBufferAsync:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
