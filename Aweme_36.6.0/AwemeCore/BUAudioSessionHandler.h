@interface BUAudioSessionHandler : NSObject

@property (nonatomic) BOOL forMuteBlock;
@property (nonatomic) BOOL playerMute;
@property (nonatomic) BOOL activeOtherAudio;
@property (nonatomic) BOOL allowModifyAudioSessionSetting;

- (void)inner_AudioPlayingWithMute:(BOOL)a0;
- (BOOL)hasHeadset;
- (void)resetAudioSessionCategoryToOriginStatus;
- (void)interruptOtherAudioPlayingWithMute:(BOOL)a0;
- (id)init;

@end
