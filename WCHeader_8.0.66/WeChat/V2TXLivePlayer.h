@class NSString, TXLivePictureInPictureController;
@protocol V2TXLivePlayerObserver;

@interface V2TXLivePlayer : NSObject <TXLivePictureInPictureControllerDelegate, V2TXLivePlayer> {
    struct Player { void /* function */ **x0; } *_player;
    struct shared_ptr<liteav::live::LiveContext> { struct LiveContext *__ptr_; struct __shared_weak_count *__cntrl_; } _live_context;
    struct shared_ptr<liteav::live::V2TXLivePlayerObserverImpl> { struct V2TXLivePlayerObserverImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _client;
    struct PlayerConfig { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } url; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } headers; BOOL enable_mete_data; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } flv_session_key; unsigned int connect_timeout_ms; unsigned int read_timeout_ms; unsigned int write_timeout_ms; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long __value_; } __pair3_; } __tree_; } target_rsp_headers_keys; int prefer_ip_stack; BOOL enable_ip_multiplexing; BOOL enable_realtime; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } leb_domain; } _config;
    BOOL _clearLastImage;
}

@property (retain, nonatomic) TXLivePictureInPictureController *pipController;
@property (weak, nonatomic) id<V2TXLivePlayerObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (long long)setProperty:(id)a0 value:(id)a1;
- (long long)setRenderView:(id)a0;
- (long long)setRenderRotation:(long long)a0;
- (long long)setRenderFillMode:(long long)a0;
- (long long)startLivePlay:(id)a0;
- (long long)stopPlay;
- (int)isPlaying;
- (long long)pauseAudio;
- (long long)resumeAudio;
- (long long)pauseVideo;
- (long long)resumeVideo;
- (long long)setPlayoutVolume:(unsigned long long)a0;
- (long long)setCacheParams:(double)a0 maxTime:(double)a1;
- (long long)switchStream:(id)a0;
- (id)getStreamList;
- (long long)enableVolumeEvaluation:(unsigned long long)a0;
- (long long)snapshot;
- (long long)enableObserveVideoFrame:(BOOL)a0 pixelFormat:(long long)a1 bufferType:(long long)a2;
- (long long)enableObserveAudioFrame:(BOOL)a0;
- (void)showDebugView:(BOOL)a0;
- (long long)enableReceiveSeiMessage:(BOOL)a0 payloadType:(int)a1;
- (long long)enablePictureInPicture:(BOOL)a0;
- (long long)startLocalRecording:(id)a0;
- (void)stopLocalRecording;
- (void)onPictureInPictureStateUpdate:(id)a0 state:(long long)a1 message:(id)a2 extraInfo:(id)a3;
- (void)pictureInPictureController:(id)a0 setPlaying:(BOOL)a1;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)a0;
- (void)onPictureInPictureControllerResumePlaybackState:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
