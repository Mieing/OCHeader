@class WXAudioNativeTask;
@protocol wxAudioFileLoaderDelegate, wxAudioOutputDelegate, wxAudioStateDelegate, wxAudioCommonDelegate;

@interface WXAudioNative : NSObject {
    struct OpaqueJSContext { } *_jscontext;
    struct WXAudioScriptState { void /* function */ **x0; unsigned int x1; struct OpaqueJSContext *x2; long long x3; struct BindingsLifeCycleMgr *x4; struct WXMediaMgr *x5; } *_audioScriptState;
    void *_audioMgr;
    WXAudioNativeTask *audioTask;
    struct WxAudioFileCallback { void /* function */ **x0; void *x1; } *m_pAudioFileCallback;
}

@property (weak, nonatomic) id<wxAudioFileLoaderDelegate> wxAudioFileDelegate;
@property (weak, nonatomic) id<wxAudioOutputDelegate> wxAudioOutputDelegate;
@property (weak, nonatomic) id<wxAudioStateDelegate> wxAudioStateDelegate;
@property (weak, nonatomic) id<wxAudioCommonDelegate> wxAudioCommonDelegate;

- (id)initWithJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1;
- (void)setLogDelegate:(id)a0;
- (BOOL)isPlayingAudio;
- (BOOL)isWaitingAudio;
- (void)forcePauseAllPlayer;
- (void)forcePauseAllPlayer:(BOOL)a0;
- (void)forceResumeAllPlayer;
- (void)setMute:(BOOL)a0;
- (void)releaseContext;
- (void)dealloc;
- (void).cxx_destruct;

@end
