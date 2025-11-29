@class NSString, CGXAudioModuleBridge;
@protocol XPlayAudioCaptureDelegate;

@interface CGXAudioCapture : CGObject <CGXAudioCaptureProtocol, XPlayAudioCapture>

@property (nonatomic) BOOL isMicrophoneRecording;
@property (weak, nonatomic) CGXAudioModuleBridge *audioModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<XPlayAudioCaptureDelegate> delegate;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)handleAudioCaptureStateChange:(BOOL)a0;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void).cxx_destruct;
- (void)startAudioCapture;
- (void)dealloc;
- (void)stopAudioCapture;
- (void)_applicationWillTerminate;
- (void)_applicationWillResignActive;
- (void)_applicationDidBecomeActive;

@end
