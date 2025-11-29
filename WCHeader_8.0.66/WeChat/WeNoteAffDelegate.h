@interface WeNoteAffDelegate : NSObject {
    struct TaskIdConvertor { struct map<zidl::TaskIdConvertor::ClientIdContext, unsigned long long, std::less<zidl::TaskIdConvertor::ClientIdContext>, std::allocator<std::pair<const zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { struct __tree<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>, std::allocator<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<zidl::TaskIdConvertor::ClientIdContext, std::__value_type<zidl::TaskIdConvertor::ClientIdContext, unsigned long long>, std::less<zidl::TaskIdConvertor::ClientIdContext>>> { unsigned long long __value_; } __pair3_; } __tree_; } client_to_server_map_id; struct map<unsigned long long, zidl::TaskIdConvertor::ClientIdContext, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { struct __tree<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, zidl::TaskIdConvertor::ClientIdContext>, std::less<unsigned long long>>> { unsigned long long __value_; } __pair3_; } __tree_; } server_to_client_map_id; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx; struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } cur_task_id; } task_id_convertor;
    struct shared_ptr<wenote::WeNoteAffDelegateCppCover> { struct WeNoteAffDelegateCppCover *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_cover;
    struct weak_ptr<wenote::WeNoteAffDelegateDispatcher> { struct WeNoteAffDelegateDispatcher *__ptr_; struct __shared_weak_count *__cntrl_; } cpp_dispatcher;
}

+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1 refCntManager:(void *)a2;

- (struct shared_ptr<wenote::WeNoteAffDelegateDispatcher> { struct WeNoteAffDelegateDispatcher *x0; struct __shared_weak_count *x1; })getDispatcher;
- (void)setDispatcher:(const void *)a0;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)a0;
- (id)init:(id)a0 createName:(const void *)a1 svrIdentity:(const void *)a2;
- (id)zidlObjToHolder;
- (id)getRTEAttachmentNativeItem:(id)a0;
- (void)onClickMedia:(id)a0 index:(int)a1 needEdit:(BOOL)a2 originRect:(id)a3;
- (void)onClickLocation:(id)a0;
- (void)onClickFile:(id)a0;
- (void)onPlayVoice:(id)a0 progress:(float)a1;
- (void)onPauseVoice:(id)a0;
- (void)onClickExpose;
- (void)onClickLink:(id)a0;
- (void)onCopyContent:(id)a0 sectionWrap:(id)a1;
- (id)onCopyAttachment:(id)a0;
- (id)onPasteAttachment:(id)a0 hitLastCopyContent:(BOOL)a1;
- (void)onClickMoreBtn;
- (void)onChangeTranslateLanguage;
- (void)onGeneratedContentFinished:(id)a0;
- (void)reportILogs:(int)a0 reportContent:(id)a1;
- (void)setCPPInstance:(id)a0;
- (void)onCloseMediaDetailsAnimationComplete:(id)a0;
- (void)onSelectPhoto;
- (void)onOpenCamera;
- (void)onSelectLocation;
- (void)onVoiceInput;
- (void)closeVoiceInput;
- (BOOL)isUsingVoiceInput;
- (void)onSelectFav;
- (void)onSelectFile;
- (BOOL)onRecordClick:(BOOL)a0;
- (BOOL)isOnRecording:(id)a0;
- (void)onUserConfirmDeleteNote;
- (id)getInfoForShareSns;
- (void)onForwardNoteToConversation:(id)a0;
- (void)checkEnablePasteAsync:(id /* block */)a0;
- (void)checkEnablePasteAsync:(id)a0 completion:(id /* block */)a1;
- (void)getAttributeInfoListFromClipBoardAsync:(id /* block */)a0;
- (void)getAttributeInfoListFromClipBoardAsync:(id)a0 completion:(id /* block */)a1;
- (BOOL)onDictationAction:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
