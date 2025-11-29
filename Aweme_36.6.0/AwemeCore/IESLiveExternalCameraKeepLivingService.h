@class AVAudioPlayer, IESLiveGCDTimer;

@interface IESLiveExternalCameraKeepLivingService : NSObject

@property (retain, nonatomic) AVAudioPlayer *player;
@property (nonatomic) long long enterBackgroundDuration;
@property (nonatomic) long long maxKeepLivingDuration;
@property (retain, nonatomic) IESLiveGCDTimer *backgroundTimer;
@property (nonatomic) unsigned long long backgroundTask;

- (void)onAppWillEnterForeground;
- (void)stopBackgroundTimer;
- (void)stopBackgroundTask;
- (void)startBackgroundTimer;
- (void)receiveInterruptionNotification:(id)a0;
- (void)stopKeepLiving;
- (id)initWithMaxKeepLivingDuration:(unsigned long long)a0;
- (BOOL)startKeepLiving;
- (void).cxx_destruct;
- (void)startBackgroundTask;

@end
