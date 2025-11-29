@class NSString;

@interface VoipCheckAudioDeviceObj : NSObject <WCAudioSessionExt>

@property (nonatomic) BOOL isUsingEarDevice;
@property (copy, nonatomic) id /* block */ audioDevicePluginCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMainThreadCallback:(id /* block */)a0;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOverride;
- (void)checkExternalAudioDeviceState;
- (void).cxx_destruct;

@end
