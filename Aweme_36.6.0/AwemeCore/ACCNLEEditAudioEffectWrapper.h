@class AWEVideoPublishViewModel, NSString, NLEInterface_OC;

@interface ACCNLEEditAudioEffectWrapper : NSObject <ACCEditBuildListener, ACCEditAudioEffectProtocolD>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isEffectPreprocessing;
@property (nonatomic) BOOL hadRecoveredVoiceEffect;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setupPublishViewModel:(id)a0;
- (void)setVolumeForAudio:(float)a0;
- (void)setVolumeForVideo:(float)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)mute:(BOOL)a0;
- (void)getVoiceBalanceDetectConfigForVideoAssets:(BOOL)a0 completion:(id /* block */)a1;
- (void)refreshAudioPlayer;
- (void)setAudioFilter:(id)a0 forAudioAssets:(id)a1;
- (void)setAudioFilter:(id)a0 forVideoAssets:(id)a1;
- (void)hotRemoveAudioAssests:(id)a0;
- (void)setVolume:(double)a0 forAudioAssets:(id)a1;
- (void)setVolume:(double)a0 forVideoAssets:(id)a1;
- (void)setAudioClipRange:(id)a0 forAudioAsset:(id)a1;
- (void)hotAppendAudioAsset:(id)a0 withRange:(id)a1;
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
- (void)p_setSlotVolume:(id)a0 volume:(double)a1 scale:(double)a2;
- (void)p_setVideoVolume:(float)a0 onlyForMainTrack:(BOOL)a1 enableVolumeDBLiner:(BOOL)a2;
- (id)existingVoiceChangerFilter;
- (void).cxx_destruct;
- (void)setVolume:(float)a0;

@end
