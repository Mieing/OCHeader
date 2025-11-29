@class NSString, CGXAudioModuleBridge;

@interface CGXAudioPuller : CGObject <CGCloudPlayerMessage, CGCloudPlayerStatusUpdateMessage, CGXAudioFrameProtocol, XPlayAudioPuller>

@property (weak, nonatomic) CGXAudioModuleBridge *audioModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)onAudioFrame:(id)a0 size:(int)a1 samples:(int)a2 sampleRate:(int)a3 channels:(int)a4 bitsPerSample:(int)a5;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)item:(id)a0 cloudPlayer:(id)a1 onUserPublishStreamAudio:(BOOL)a2 uid:(id)a3;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void)enableAudioPuller:(BOOL)a0;
- (void)_applicationDidEnterBackgroundNotification;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_applicationDidBecomeActive;

@end
