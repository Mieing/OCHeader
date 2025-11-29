@class NSArray, ACCAdvanceEditViewModel, AWEVideoPublishViewModel, ACCAdvanceEditAssetsHandler;
@protocol ACCEditMusicServiceProtocol, ACCMusicVolumeServiceProtocol, ACCEditClipV1ServiceProtocol;

@interface ACCAEDataSyncer : NSObject

@property (nonatomic) BOOL editedBGM;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) ACCAdvanceEditViewModel *advanceEditViewModel;
@property (weak, nonatomic) id<ACCMusicVolumeServiceProtocol> volumeService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipService;
@property (retain, nonatomic) ACCAdvanceEditAssetsHandler *assetsViewModel;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL enterWithBGM;
@property (copy, nonatomic) NSArray *unusedTracks;

- (BOOL)updateVoiceVolume:(float)a0;
- (BOOL)updateBgmVolume:(float)a0;
- (id)nle;
- (void)setEffectPathBlock:(id /* block */)a0;
- (id)sourceAssetArray;
- (BOOL)shouldModifyAbilityInSlides;
- (id)editingVideoData;
- (void)updateBaseInfo;
- (void)restoreUnusedTracksForModel:(id)a0;
- (BOOL)checkStickerTrack:(id)a0 equalToResourceType:(unsigned long long)a1;
- (void)resetUserEditAudioInfo;
- (void)dataSync;
- (void)storeUnusedTracksForModel:(id)a0;
- (id)editingNLEModel;
- (void)validTimeRange;
- (void)saveOriginVolumeRatio;
- (void)updateRecordFragmentInfo;
- (void)updateBGMInfoOfModel:(id)a0;
- (void)updateVolumeInfoOfModel:(id)a0;
- (void)updateBeatEditInfoOfModel:(id)a0;
- (void)updateSourceAssetArrayIfNeed;
- (void)adjustTimeEffectDuration:(id)a0;
- (void)adjustAudioDuration:(id)a0 model:(id)a1;
- (void)updateMusicLoopInfoOfModel:(id)a0;
- (void)markAudioEditTipDisplay:(BOOL)a0 targetTrack:(id)a1;
- (void)clearBgmInfo;
- (void)discardPublishModelBGMInfoIfNeed;
- (void)toggleVoiceOn:(BOOL)a0 voiceVolume:(double)a1;
- (void)removeLyricStickerTrackFromUnusedTracksArrIfNeeded;
- (id)checkIsRecordAsset:(id)a0;
- (double)volumeForSlot:(id)a0;
- (id)initWithPublishModel:(id)a0 musicService:(id)a1 advanceEditModel:(id)a2 volumeService:(id)a3 clipService:(id)a4;
- (long long)imageOrientationOfSlot:(id)a0;
- (double)videoMaxSeconds;
- (void).cxx_destruct;
- (void)updateVideoInfo;
- (void)updateAudioInfo;

@end
