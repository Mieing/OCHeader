@class NSURL;

@interface IESMMBGFFSyncPlayer : IESMMBGVideoPlayer {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } m_bEOF;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } isStoped;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } isPlaying;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } isPlayerSeeking;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_mtxRunloop;
    struct shared_ptr<ITETaskQueue> { struct ITETaskQueue *__ptr_; struct __shared_weak_count *__cntrl_; } mProcessQueue;
    struct shared_ptr<ITEVideoReader> { struct ITEVideoReader *__ptr_; struct __shared_weak_count *__cntrl_; } mVideoReader;
    struct TEBlockingQueue<std::shared_ptr<ITEVideoFrame>> { void /* function */ **_vptr$TEBlockingQueue; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_oOperate; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } m_cvProducer; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } m_cvConsumer; struct list<std::shared_ptr<ITEVideoFrame>, std::allocator<std::shared_ptr<ITEVideoFrame>>> { struct __list_node_base<std::shared_ptr<ITEVideoFrame>, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<std::shared_ptr<ITEVideoFrame>, void *>>> { unsigned long long __value_; } __size_alloc_; } m_queue; unsigned long long m_uCapacity; BOOL m_bIsActive; } m_cache;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } m_mtxLastFrame;
    struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { _Atomic long long __a_value; } __a_; } m_lastVideoTimestamp;
    struct shared_ptr<ITEVideoFrame> { struct ITEVideoFrame *__ptr_; struct __shared_weak_count *__cntrl_; } m_spLastFrame;
}

@property (nonatomic) float rate;
@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) id /* block */ completeBlock;

- (struct __CVBuffer { } *)copyPixelBuffer;
- (id)currentUrl;
- (void)setVideoURL:(id)a0 rate:(float)a1 completeBlock:(id /* block */)a2 didPlayToEndBlock:(id /* block */)a3;
- (void)setVideoURL:(id)a0 rate:(float)a1 completeBlock:(id /* block */)a2;
- (void)changeRate:(float)a0 completeBlock:(id /* block */)a1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completeBlock:(id /* block */)a1;
- (struct __CVBuffer { } *)copyPixelBufferInterval:(double)a0;
- (long long)getLastTime;
- (struct __CVBuffer { } *)getLastFrame;
- (BOOL)createVideoReader;
- (void)releaseVideoReader;
- (void)decodeFramesLoop;
- (long long)decodeSeekToTime:(long long)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)enterBackground;
- (id)init;
- (void)stop;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (id).cxx_construct;
- (void)enterForeground;
- (void)dealloc;
- (void)setLastFrame:(struct shared_ptr<ITEVideoFrame> { struct ITEVideoFrame *x0; struct __shared_weak_count *x1; })a0;

@end
