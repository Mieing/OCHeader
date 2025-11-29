@class AVAudioPlayer;

@interface IESLiveScreencastKeepLivingService : NSObject

@property (retain, nonatomic) AVAudioPlayer *player;

- (void)receiveInterruptionNotification:(id)a0;
- (void)stopKeepLiving;
- (BOOL)startKeepLiving;
- (void).cxx_destruct;

@end
