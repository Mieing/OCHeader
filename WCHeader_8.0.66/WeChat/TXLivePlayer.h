@class NSString, TXLivePlayConfig, TXLivePictureInPictureController;
@protocol TXVideoCustomProcessDelegate, TXAudioRawDataDelegate, TXLiveRecordListener, TXLivePlayListener;

@interface TXLivePlayer : NSObject <TXLivePictureInPictureControllerDelegate> {
    struct Player { void /* function */ **x0; } *_player;
    struct shared_ptr<liteav::live::LiveContext> { struct LiveContext *__ptr_; struct __shared_weak_count *__cntrl_; } _live_context;
    struct PlayerConfig { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } url; struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } headers; BOOL enable_mete_data; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } flv_session_key; unsigned int connect_timeout_ms; unsigned int read_timeout_ms; unsigned int write_timeout_ms; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long __value_; } __pair3_; } __tree_; } target_rsp_headers_keys; int prefer_ip_stack; BOOL enable_ip_multiplexing; BOOL enable_realtime; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } leb_domain; } _inner_config;
    struct shared_ptr<liteav::live::TXLivePlayerObserverImpl> { struct TXLivePlayerObserverImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _client;
}

@property (retain, nonatomic) TXLivePictureInPictureController *pipController;
@property (weak, nonatomic) id<TXLivePlayListener> delegate;
@property (weak, nonatomic) id<TXVideoCustomProcessDelegate> videoProcessDelegate;
@property (weak, nonatomic) id<TXAudioRawDataDelegate> audioRawDataDelegate;
@property (nonatomic) BOOL enableHWAcceleration;
@property (copy, nonatomic) TXLivePlayConfig *config;
@property (weak, nonatomic) id<TXLiveRecordListener> recordDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setAudioRoute:(long long)a0;

- (id)init;
- (void)dealloc;
- (void)setupVideoWidget:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containView:(id)a1 insertIndex:(unsigned int)a2;
- (void)removeVideoWidget;
- (int)startLivePlay:(id)a0 type:(long long)a1;
- (int)stopPlay;
- (BOOL)isPlaying;
- (void)pause;
- (void)resume;
- (void)setRenderRotation:(long long)a0;
- (void)setRenderMode:(long long)a0;
- (void)setMute:(BOOL)a0;
- (void)setVolume:(int)a0;
- (int)startRecord:(long long)a0;
- (int)stopRecord;
- (void)snapshot:(id /* block */)a0;
- (void)setLogViewMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)showVideoDebugLog:(BOOL)a0;
- (void)setAudioVolumeEvaluationListener:(id /* block */)a0;
- (void)enableAudioVolumeEvaluation:(unsigned long long)a0;
- (int)switchStream:(id)a0;
- (unsigned long long)getCurrentRenderPts;
- (void)callExperimentalAPI:(id)a0;
- (id)getFileNameByTimeNow:(id)a0 fileType:(id)a1;
- (BOOL)enablePictureInPicture:(BOOL)a0;
- (void)onPictureInPictureStateUpdate:(id)a0 state:(long long)a1 message:(id)a2 extraInfo:(id)a3;
- (void)pictureInPictureController:(id)a0 setPlaying:(BOOL)a1;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)a0;
- (void)onPictureInPictureControllerResumePlaybackState:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
