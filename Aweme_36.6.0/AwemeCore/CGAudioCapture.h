@class NSString;
@protocol XPlayAudioCaptureDelegate;

@interface CGAudioCapture : CGObject <XPlayAudioCapture>

@property (nonatomic) BOOL isMicrophoneRecording;
@property (weak, nonatomic) id<XPlayAudioCaptureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)handleAudioCapture:(id)a0;
- (void)controlLocalAudioCapture:(id)a0;
- (void).cxx_destruct;
- (void)startAudioCapture;
- (void)dealloc;
- (void)stopAudioCapture;
- (void)_applicationWillTerminate;
- (void)_applicationWillResignActive;
- (void)_applicationDidBecomeActive;

@end
