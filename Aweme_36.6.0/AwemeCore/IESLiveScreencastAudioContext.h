@class IESLiveScreencastKeepLivingService;
@protocol IESLiveScreenshotHub;

@interface IESLiveScreencastAudioContext : NSObject

@property (retain, nonatomic) IESLiveScreencastKeepLivingService *keepLivingService;
@property long long micStatus;
@property (retain, nonatomic) id<IESLiveScreenshotHub> hub;
@property (nonatomic) BOOL liveScreencastDiABFrequencyOpt;

- (void)stopKeepLiving;
- (void)startKeepLiving;
- (void)receivedAudioCaptureEvent:(long long)a0;
- (void)changeMicStatusTo:(long long)a0;
- (void)stopMicCaptureOnly;
- (void)micAudioCaptureDidInterrupted;
- (void)micAudioCaptureDidRestarted;
- (void)doMicInterrupted;
- (void)doMicRestarted;
- (void)reportMicAudioChangedWithLog:(id)a0;
- (void)sendNotificationWithText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)startAudioCapture;
- (void)stopAudioCapture;

@end
