@protocol WeMediaDelegate;

@interface WeMediaApi : NSObject {
    void *runtime;
    struct OpaqueJSContext { } *js_context;
}

@property (weak, nonatomic) id<WeMediaDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)setLoglvl:(int)a0;
- (void)setJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1 baseDir:(id)a2;
- (void)setJSContext:(struct OpaqueJSContext { } *)a0 parent:(struct OpaqueJSValue { } *)a1;
- (void)onSuspend;
- (void)onBackground;
- (void)onForeground;
- (void)stopAllAudioPlayer;
- (void)startAllAudioPlayer;
- (BOOL)isAudioPlaying;
- (void)releaseContext;
- (void).cxx_destruct;

@end
