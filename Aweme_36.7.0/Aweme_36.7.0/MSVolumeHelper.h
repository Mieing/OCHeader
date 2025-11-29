@class AVAudioSession;

@interface MSVolumeHelper : NSObject

@property (nonatomic) int isMute;
@property (nonatomic) int isLockScreen;
@property (nonatomic) float curVolumeSize;
@property (nonatomic) float oriVolumeSize;
@property (retain, nonatomic) AVAudioSession *session;

+ (id)sharedInstance;

- (void)SystemVolumeDidChange:(id)a0;
- (BOOL)checkTouchIDAndPasscodeStatus;
- (float)getCurVol;
- (void).cxx_destruct;
- (id)init;
- (void)volumeChanged:(id)a0;

@end
