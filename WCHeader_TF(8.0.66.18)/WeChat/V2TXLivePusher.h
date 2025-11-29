@class NSString, TXBeautyManager, TXDeviceManager, TXAudioEffectManager;

@interface V2TXLivePusher : NSObject <V2TXLivePusherObserver, V2TXLivePusher> {
    struct Pusher { void /* function */ **x0; } *_pusher;
    struct shared_ptr<liteav::live::LiveContext> { struct LiveContext *__ptr_; struct __shared_weak_count *__cntrl_; } _live_context;
    struct PusherConfig { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } url; BOOL enable_rtmp_acc; BOOL enable_pure_audio_mode; BOOL enable_realtime; BOOL enable_video_flow_control; BOOL enable_sei_timestamp_message; int retry_limit; int retry_interval_ms; int qos_type; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } meta_data; int prefer_ip_stack; } _config;
    struct shared_ptr<liteav::live::V2TXLivePusherObserverImpl> { struct V2TXLivePusherObserverImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _client;
    TXDeviceManager *_deviceManager;
    TXBeautyManager *_beautyManager;
    TXAudioEffectManager *_audioEffectManager;
    struct unique_ptr<liteav::video::NativePixelFrameFactory, std::default_delete<liteav::video::NativePixelFrameFactory>> { struct __compressed_pair<liteav::video::NativePixelFrameFactory *, std::default_delete<liteav::video::NativePixelFrameFactory>> { struct NativePixelFrameFactory *__value_; } __ptr_; } _pixel_frame_factory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithLiveMode:(unsigned long long)a0;
- (void)dealloc;
- (void)setObserver:(id)a0;
- (long long)setRenderView:(id)a0;
- (long long)setRenderMirror:(long long)a0;
- (long long)setEncoderMirror:(BOOL)a0;
- (long long)setRenderRotation:(long long)a0;
- (long long)setRenderFillMode:(long long)a0;
- (long long)startCamera:(BOOL)a0;
- (long long)stopCamera;
- (long long)startMicrophone;
- (long long)stopMicrophone;
- (long long)startVirtualCamera:(id)a0;
- (long long)stopVirtualCamera;
- (long long)startScreenCapture:(id)a0;
- (long long)stopScreenCapture;
- (long long)pauseAudio;
- (long long)resumeAudio;
- (long long)pauseVideo;
- (long long)resumeVideo;
- (long long)startPush:(id)a0;
- (long long)stopPush;
- (int)isPushing;
- (long long)setAudioQuality:(long long)a0;
- (long long)setVideoQuality:(id)a0;
- (id)getAudioEffectManager;
- (id)getBeautyManager;
- (id)getDeviceManager;
- (long long)snapshot;
- (long long)setWatermark:(id)a0 x:(float)a1 y:(float)a2 scale:(float)a3;
- (long long)enableVolumeEvaluation:(unsigned long long)a0;
- (long long)enableCustomVideoProcess:(BOOL)a0 pixelFormat:(long long)a1 bufferType:(long long)a2;
- (long long)enableCustomVideoCapture:(BOOL)a0;
- (long long)enableCustomAudioCapture:(BOOL)a0;
- (long long)sendCustomVideoFrame:(id)a0;
- (long long)sendCustomAudioFrame:(id)a0;
- (long long)enableAudioProcessObserver:(BOOL)a0 format:(id)a1;
- (long long)sendSeiMessage:(int)a0 data:(id)a1;
- (void)showDebugView:(BOOL)a0;
- (long long)setProperty:(id)a0 value:(id)a1;
- (long long)setMixTranscodingConfig:(id)a0;
- (long long)startLocalRecording:(id)a0;
- (void)stopLocalRecording;
- (void)enableVoiceActivityDetection:(BOOL)a0;
- (long long)enable3A:(id)a0 value:(id)a1;
- (int)convertToInnerLiveMixInputType:(long long)a0;
- (struct LiveMixStream { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; int x2; int x3; int x4; int x5; int x6; int x7; unsigned int x8; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x9; })convertToInnerLiveMixStream:(id)a0;
- (struct LiveTranscodingConfig { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x14; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x15; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x16; struct vector<liteav::live::LiveMixStream, std::allocator<liteav::live::LiveMixStream>> { struct LiveMixStream *x0; struct LiveMixStream *x1; struct __compressed_pair<liteav::live::LiveMixStream *, std::allocator<liteav::live::LiveMixStream>> { struct LiveMixStream *x0; } x2; } x17; })convertToInnerMixTranscodingConfig:(id)a0;
- (int)convertToInnerFormat:(long long)a0;
- (struct unique_ptr<liteav::video::NativePixelFrame, std::default_delete<liteav::video::NativePixelFrame>> { struct __compressed_pair<liteav::video::NativePixelFrame *, std::default_delete<liteav::video::NativePixelFrame>> { struct NativePixelFrame *x0; } x0; })convertToInnerFrame:(id)a0;
- (struct VideoSize { int x0; int x1; })getVideoSizeWith:(long long)a0 mode:(long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
