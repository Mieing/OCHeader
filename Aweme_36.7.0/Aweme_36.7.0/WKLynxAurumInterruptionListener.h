@interface WKLynxAurumInterruptionListener : NSObject

@property (nonatomic) struct AudioIOS { void /* function */ **x0; struct AudioEngine *x1; BOOL x2; struct OpaqueAudioComponentInstance *x3; BOOL x4; BOOL x5; id x6; id x7; } *backend;

- (void)onAppDidBecomeActive:(id)a0;
- (void)onAudioSessionReset;
- (void)onAudioInterrupt:(id)a0;
- (id)init:(struct AudioIOS { void /* function */ **x0; struct AudioEngine *x1; BOOL x2; struct OpaqueAudioComponentInstance *x3; BOOL x4; BOOL x5; id x6; id x7; } *)a0;

@end
