@class TPAppleOpenGLView, NSRecursiveLock, UIView;

@interface TPAppleOpenGLViewMgr : NSObject

@property (retain) TPAppleOpenGLView *glView;
@property (retain) UIView *containerView;
@property (nonatomic) struct TPRendererConfigs { int renderThreadPriority; struct TPRendererAudioFrameParams { int format; int sampleRate; unsigned long long channelLayout; int channels; struct TPEncodedDataParams { int codecID; int profile; int mediaType; } encodedDataParams; } audioFrameParams; BOOL resetAudioRendererWhenFlush; long long audioNonBluetoothMaxLatencyUs; long long audioBluetoothMaxLatencyUs; struct shared_ptr<tp_utils::TPAudioAttributes> { struct TPAudioAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } audioAttributes; BOOL enableAsyncBlockWrite; BOOL enableAllocSuggestedBufferSize; BOOL enableAdaptAudioQueue; BOOL enableAudioQueueNewLatency; struct TPRendererVideoFrameParams { int format; int width; int height; struct TPRational { int num; int den; } sampleAspectRatio; int rotation; unsigned long long cropTop; unsigned long long cropBottom; unsigned long long cropLeft; unsigned long long cropRight; } videoFrameParams; void *videoRenderTarget; BOOL enableColorManagement; BOOL enableViewContentMode; BOOL enableRefactorRender; BOOL atBottom; int enableRendererSharpen; int enableRendererLucid; int enableRendererClarity; int enableRendererColorLUT; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } rendererColorLUTFilePath; BOOL enableRenderOptYuv420; } configs;
@property (nonatomic) BOOL inited;
@property (nonatomic) struct TPRendererVideoFrameParams { int format; int width; int height; struct TPRational { int num; int den; } sampleAspectRatio; int rotation; unsigned long long cropTop; unsigned long long cropBottom; unsigned long long cropLeft; unsigned long long cropRight; } curFrameParams;
@property (nonatomic) int gravity;
@property (nonatomic) struct ITPRendererInterruptCallback { void /* function */ **x0; } *interruptCallback;
@property BOOL waitingForMainThread;
@property (retain) NSRecursiveLock *glActiveLock;
@property BOOL glActive;
@property (nonatomic) int tryLockErrorCount;
@property (nonatomic) BOOL contentModeObserved;
@property BOOL backgroundRenderingEnabled;
@property BOOL isInBackground;

- (id)init;
- (void)dealloc;
- (int)configure:(struct TPRendererConfigs { int x0; struct TPRendererAudioFrameParams { int x0; int x1; unsigned long long x2; int x3; struct TPEncodedDataParams { int x0; int x1; int x2; } x4; } x1; BOOL x2; long long x3; long long x4; struct shared_ptr<tp_utils::TPAudioAttributes> { struct TPAudioAttributes *x0; struct __shared_weak_count *x1; } x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; struct TPRendererVideoFrameParams { int x0; int x1; int x2; struct TPRational { int x0; int x1; } x3; int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } x10; void *x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; int x16; int x17; int x18; int x19; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x20; BOOL x21; })a0;
- (int)initRenderer;
- (int)unInitRenderer;
- (BOOL)isInited;
- (int)flush;
- (int)writeOneFrame:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (int)setVideoRenderTarget:(id)a0;
- (int)setVideoGravity:(int)a0;
- (void)setupGLActive;
- (void)lockGLActive;
- (void)unlockGLActive;
- (BOOL)tryLockGLActive;
- (void)toggleGLActive:(BOOL)a0;
- (void)registerApplicationObservers;
- (void)unregisterApplicationObservers;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)observeContentMode;
- (void)unObserveContentMode;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (int)createGLView:(struct TPRendererVideoFrameParams { int x0; int x1; int x2; struct TPRational { int x0; int x1; } x3; int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })a0;
- (void)removeGLView;
- (int)writeOneFrameToGLView:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (long long)getContentModeFromGravity:(int)a0;
- (struct TPRendererVideoFrameParams { int x0; int x1; int x2; struct TPRational { int x0; int x1; } x3; int x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })getFrameParams:(struct TPFrame { int x0; char *x1[8]; int x2[8]; char **x3; int x4; int x5; int x6; long long x7; long long x8; long long x9; void *x10; long long x11; int x12; struct TPFrameSideData **x13; int x14; int x15; int x16; int x17; struct TPRational { int x0; int x1; } x18; int x19; int x20; int x21; int x22; int x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; int x28; int x29; int x30; unsigned long long x31; int x32; struct TPFrameReleaseDataCB { void /* function */ *x0; void *x1; } x33; struct TPFrameReleasePlanarDataCB { void /* function */ *x0; void *x1; } x34; struct TPFrameInternal *x35; int x36; long long x37; } *)a0;
- (int)waitForMainThread;
- (void)setParam:(int)a0 withBlock:(struct TPRendererParamBlock { int x0; long long x1; void *x2; })a1;
- (void)changeGLActiveInBackground;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
