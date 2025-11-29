@interface ChatbotUICPP2NativeCaller : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<chatbot::ChatbotUICPP2NativeCallerCppCover> { struct ChatbotUICPP2NativeCallerCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<chatbot::ChatbotUICPP2NativeCallerDispatcher> { struct ChatbotUICPP2NativeCallerDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<chatbot::ChatbotUICPP2NativeCallerDispatcher> { struct ChatbotUICPP2NativeCallerDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)a0;
- (id)init:(id)a0 createName:(const void *)a1 svrIdentity:(const void *)a2;
- (id)zidlObjToHolder;
- (void)talkSuccAsync:(unsigned long long)a0 openScene:(int)a1 completion:(id /* block */)a2;
- (void)talkSuccAsync:(unsigned long long)a0 openScene:(int)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)callEndAsync:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)callEndAsync:(unsigned long long)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onRecvRUDPAsync:(int)a0 content:(id)a1 completion:(id /* block */)a2;
- (void)onRecvRUDPAsync:(int)a0 content:(id)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)onTTSBeginAsync:(id)a0 completion:(id /* block */)a1;
- (void)onTTSBeginAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onTTSEndAsync:(id)a0 completion:(id /* block */)a1;
- (void)onTTSEndAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onAIMicSpeakStatusAsync:(BOOL)a0 completion:(id /* block */)a1;
- (void)onAIMicSpeakStatusAsync:(BOOL)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onRecvMsgAsync:(id)a0 completion:(id /* block */)a1;
- (void)onRecvMsgAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onRecvStreamTextAsync:(id)a0 textSeq:(int)a1 completion:(id /* block */)a2;
- (void)onRecvStreamTextAsync:(id)a0 textSeq:(int)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)onRecvQuestionInfoAsync:(id)a0 completion:(id /* block */)a1;
- (void)onRecvQuestionInfoAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onRecvWeAppNotifyClientMsgAsync:(id)a0 completion:(id /* block */)a1;
- (void)onRecvWeAppNotifyClientMsgAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onRecvWeAppCdpAsync:(id)a0 callId:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)onRecvWeAppCdpAsync:(id)a0 callId:(id)a1 context:(id)a2 on:(id)a3 completion:(id /* block */)a4;
- (void)onRecvWeAppProccessMsgAsync:(id)a0 completion:(id /* block */)a1;
- (void)onRecvWeAppProccessMsgAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onRecvPOIRequestAsync:(id)a0 isFirstReq:(BOOL)a1 callId:(id)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)onRecvPOIRequestAsync:(id)a0 isFirstReq:(BOOL)a1 callId:(id)a2 context:(id)a3 on:(id)a4 completion:(id /* block */)a5;
- (void)onRecvCommonFunctionCallDataAsync:(id)a0 completion:(id /* block */)a1;
- (void)onRecvCommonFunctionCallDataAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onSocialHistoryUpdateAsync:(id)a0 completion:(id /* block */)a1;
- (void)onSocialHistoryUpdateAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onRecvAiSpeakingInfoAsync:(id)a0 completion:(id /* block */)a1;
- (void)onRecvAiSpeakingInfoAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onAIComeInAsync:(unsigned long long)a0 memberID:(int)a1 completion:(id /* block */)a2;
- (void)onAIComeInAsync:(unsigned long long)a0 memberID:(int)a1 on:(id)a2 completion:(id /* block */)a3;
- (void)onRecvPrologueMsgWrapInfoAsync:(id)a0 completion:(id /* block */)a1;
- (void)onRecvPrologueMsgWrapInfoAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)onRecvRecommendMsgInfoAsync:(id)a0 completion:(id /* block */)a1;
- (void)onRecvRecommendMsgInfoAsync:(id)a0 on:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
