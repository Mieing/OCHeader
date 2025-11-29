@class DAVResourceManager_OC, NSString;

@interface BMFModsDownloader : NSObject {
    struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } cv_;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mtx_;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } status_;
}

@property (retain, nonatomic) DAVResourceManager_OC *resourceManager_;
@property (retain) NSString *modelPath_;

- (int)download:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8 :(id)a9 :(id)a10 :(id)a11;
- (id)waitAndGetSourcePath;
- (int)asyncDownload:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8 :(id)a9 :(id)a10 :(id)a11 :(id /* block */)a12;
- (void).cxx_destruct;
- (id)init;
- (void)setStatus:(BOOL)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
