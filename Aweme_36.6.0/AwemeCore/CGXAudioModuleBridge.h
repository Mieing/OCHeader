@class NSString;
@protocol CGXAudioFrameProtocol, CGXAudioCaptureProtocol;

@interface CGXAudioModuleBridge : NSObject <CGXModuleProtocol> {
    void *nativeAudioModule_;
    struct AudioModuleListenerBridge { void /* function */ **x0; void /* function */ **x1; id x2; } *m_listenerBridge;
}

@property (weak, nonatomic) id<CGXAudioFrameProtocol> audioFrameDelegate;
@property (weak, nonatomic) id<CGXAudioCaptureProtocol> audioCaptureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAudioFrame:(id)a0 size:(int)a1 samples:(int)a2 sampleRate:(int)a3 channels:(int)a4 bitsPerSample:(int)a5;
- (void)registerAudioCaptureListener:(id)a0;
- (void)unregisterAudioCaptureListener;
- (void)enableAudioCapture:(BOOL)a0;
- (void)onAudioCaptureStateChanged:(BOOL)a0;
- (void)registerAudioFrameListener:(id)a0;
- (void)unregisterAudioFrameListener;
- (void)enableAudioFrame:(BOOL)a0;
- (void)initModule:(void *)a0;
- (void)uninitModule;
- (void).cxx_destruct;

@end
