@class NSString;

@interface VEEffectVideoPlayerFactory : IESMMObject <VEAppStatusProtocol> {
    void *_cxxFactory;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct vector<void *, std::allocator<void *>> { void **__begin_; void **__end_; struct __compressed_pair<void **, std::allocator<void *>> { void **__value_; } __end_cap_; } _decodedFrames;
}

@property (nonatomic) BOOL cameraIsRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_clearCacahedFrames;
- (void)p_storePixelBuffer:(struct __CVBuffer { } *)a0;
- (void)p_pausePlayers;
- (void)p_resumePlayers;
- (void)resumePlayers;
- (void)pausePlayers;
- (void)pullPixelBuffers:(id /* block */)a0;
- (void *)getFactory;
- (void)becomeActive;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)resignActive;
- (id)init;
- (id).cxx_construct;
- (void)enterForeground;
- (void)dealloc;
- (void)memoryWarning;

@end
