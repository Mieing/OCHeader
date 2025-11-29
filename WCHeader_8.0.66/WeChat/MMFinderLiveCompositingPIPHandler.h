@interface MMFinderLiveCompositingPIPHandler : MMFinderLivePIPHandler

@property (nonatomic) BOOL isPIPCheckStart;

- (void)checkPictureInPictureAbility;
- (void)checkPictureInPictureAbilityIfNotFit;
- (void)checkNeedForbidPIPInSpecialPlatformSystem;
- (void)checkCurrentCdnPlayerItemVideoDecodeTypeForPIP;
- (void)startCheckPictureInPictureNeedAutoStart;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)a0;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)updateCurrentVideoDecodePictureInPictureOptions;
- (void)configPIPHandleLogic;
- (id)getPIPHandleLogic;
- (id)getCurrentPIPHandleLogic;
- (BOOL)isPIPHandleLogicPrepared;

@end
