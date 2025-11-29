@interface TVLRTCPlayerWrapper2 : NSObject {
    struct RTSPlayEngineConfigure { int e_vendor_type; char *play_uri; char *scfg_path; char *session_id; BOOL enable_dtls; BOOL enable_hardware_decode; BOOL hardware_with_oes; int jitter_buffer_ms; int jitter_buffer_max_ms; void *jvm; void *app_context; } _configure;
    void *_createEnginePtr;
    void *_destoryEnginePtr;
    void *_createAudioEnginePtr;
    void *_destoryAudioEnginePtr;
}

@property (readonly, nonatomic) void *configure;
@property (readonly, nonatomic) void *createEnginePtr;
@property (readonly, nonatomic) void *destoryEnginePtr;
@property (readonly, nonatomic) void *createAudioEnginePtr;
@property (readonly, nonatomic) void *destoryAudioEnginePtr;

- (id)initWithConfiguration:(id)a0;
- (id).cxx_construct;
- (void)dealloc;

@end
