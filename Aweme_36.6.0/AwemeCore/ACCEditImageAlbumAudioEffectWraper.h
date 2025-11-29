@class NSString, AVAsset;
@protocol ACCImageAlbumEditorSessionProtocol;

@interface ACCEditImageAlbumAudioEffectWraper : NSObject <ACCEditBuildListener, ACCEditAudioEffectProtocolD, ACCEditBGMProtocol>

@property (weak, nonatomic) id<ACCImageAlbumEditorSessionProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isEffectPreprocessing;
@property (nonatomic) BOOL hadRecoveredVoiceEffect;
@property (retain, nonatomic) AVAsset *bgmAsset;

- (void)onEditSessionInit:(id)a0;
- (float)bgmVolume;
- (void)setVolumeForAudio:(float)a0;
- (void)setVolumeForVideo:(float)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)mute:(BOOL)a0;
- (void)getVoiceBalanceDetectConfigForVideoAssets:(BOOL)a0 completion:(id /* block */)a1;
- (void)refreshAudioPlayer;
- (void)setAudioFilter:(id)a0 forAudioAssets:(id)a1;
- (void)setAudioFilter:(id)a0 forVideoAssets:(id)a1;
- (void)setBGM:(id)a0 startTime:(double)a1 clipDuration:(double)a2 repeatCount:(long long)a3;
- (void)removeBGM;
- (void)hotRemoveAudioAssests:(id)a0;
- (void)setVolume:(double)a0 forAudioAssets:(id)a1;
- (void)setVolume:(double)a0 forVideoAssets:(id)a1;
- (void)setAudioClipRange:(id)a0 forAudioAsset:(id)a1;
- (void)hotAppendAudioAsset:(id)a0 withRange:(id)a1;
- (void)setBGMClipRange:(id)a0;
- (void)setBGM:(id)a0 start:(double)a1 duration:(double)a2 repeatCount:(long long)a3 completion:(id /* block */)a4;
- (void)hotAppendAudioAsset:(id)a0 withRange:(id)a1 constructBlock:(id /* block */)a2;
- (void)hotRemoveAudioUsePathWithAsset:(id)a0;
- (void)setVolumeForVideoMainTrack:(float)a0;
- (void)setVolumeForVideoSubTrack:(float)a0;
- (void)setVolumeForCutsameVideo:(float)a0;
- (void)setVolumeForGenericTemplateTrack:(float)a0;
- (void)setVideoVolumeForDuet:(float)a0;
- (double)getGenericTemplateTrackVolume;
- (void)setVoiceVolumeForGenericTemplateTrack:(float)a0;
- (void)setMusicVolumeForGenericTemplateTrack:(float)a0;
- (void)setVolumeForPGCAndUGCTrack:(float)a0;
- (double)getPGCAndUGCTrackVolume;
- (void)applyAudioEffectWithEffectPath:(id)a0 inPreProcessInfo:(id)a1 inBlock:(id /* block */)a2;
- (void)startAudioFilterPreview:(id)a0 completion:(id /* block */)a1;
- (void)stopFiltersPreview;
- (void)updateAudioFilters:(id)a0 withEffects:(id)a1 forVideoAssetsWithcompletion:(id /* block */)a2;
- (id)slotNameWithAsset:(id)a0;
- (void)hotAppendTextReadAudioAsset:(id)a0 withRange:(id)a1;
- (void)hotAppendTextReadAudioAsset:(id)a0 withRange:(id)a1 constructBlock:(id /* block */)a2;
- (void)hotAppendKaraokeAudioAsset:(id)a0 withRange:(id)a1;
- (void)hotAppendAudioTrack:(long long)a0 audioAsset:(id)a1 withRange:(id)a2;
- (void)hotRemovePGCAndUGCTrackWithNLEModel:(id)a0;
- (void)recoverRepeatCount;
- (void)setBGMAsset:(id)a0 start:(double)a1 duration:(double)a2 repeatCount:(long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)setVolume:(float)a0;

@end
