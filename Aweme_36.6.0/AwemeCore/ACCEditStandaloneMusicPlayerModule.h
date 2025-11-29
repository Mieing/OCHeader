@class ACCSequenceEditBGM, NSString, AWEVideoPublishViewModel, ACCSequenceBGMPlayer;

@interface ACCEditStandaloneMusicPlayerModule : NSObject <ACCEditStandaloneMusicPlayerProtocol>

@property (retain, nonatomic) ACCSequenceEditBGM *BGM;
@property (retain, nonatomic) ACCSequenceBGMPlayer *audioPlayer;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)currentPlayTime;
- (void)continuePlay;
- (void)setAudioClipRange:(id)a0;
- (void)updateMusicModelBgmAssetForDetailMusic:(id)a0;
- (void)updateMusic:(id)a0;
- (id)initWithBGM:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)setVolume:(double)a0;
- (void)dealloc;

@end
