@class AVAsset, NSString, ACCSequenceBGMPlayer;

@interface ACCSequenceEditBGM : NSObject <ACCEditBGMProtocol>

@property (retain, nonatomic) ACCSequenceBGMPlayer *player;
@property (retain, nonatomic) AVAsset *bgmAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)bgmVolume;
- (void)setVolumeForAudio:(float)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)refreshAudioPlayer;
- (void)setBGM:(id)a0 startTime:(double)a1 clipDuration:(double)a2 repeatCount:(long long)a3;
- (void)removeBGM;
- (void)setBGMClipRange:(id)a0;
- (void)setBGM:(id)a0 start:(double)a1 duration:(double)a2 repeatCount:(long long)a3 completion:(id /* block */)a4;
- (void)recoverRepeatCount;
- (void)setBGMAsset:(id)a0 start:(double)a1 duration:(double)a2 repeatCount:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
