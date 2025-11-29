@class NSArray, AWEVideoPublishViewModel;
@protocol ACCMusicVolumeServiceProtocol, ACCAdvanceEditViewModelProtocol, AWEEditKit, ACCEditMusicServiceProtocol, AWEStudioEditMusicFeaturePublicAPI, ACCEditClipV1ServiceProtocol, ACCEditServiceProtocol;

@interface ACCAdvanceEditDataSyncer : NSObject

@property (nonatomic) BOOL editedBGM;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> advanceEditViewModel;
@property (weak, nonatomic) id<ACCMusicVolumeServiceProtocol> volumeService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipService;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<AWEStudioEditMusicFeaturePublicAPI> musicFeature;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL enterWithBGM;
@property (copy, nonatomic) NSArray *unusedTracks;

- (id)nle;
- (id)p_checkIsRecordAsset:(id)a0;
- (long long)p_imageOrientationOfSlot:(id)a0;
- (void)updateBaseInfo;
- (void)p_updateRecordFragmentInfo;
- (void)p_updateBGMInfoOfModel:(id)a0;
- (void)p_updateVolumeInfoOfModel:(id)a0;
- (void)p_updateBeatEditInfoOfModel:(id)a0;
- (void)restoreUnusedTracksForModel:(id)a0;
- (BOOL)checkStickerTrack:(id)a0 equalToResourceType:(unsigned long long)a1;
- (void)p_adjustTimeEffectDuration:(id)a0;
- (void)p_adjustAudioDuration:(id)a0 model:(id)a1;
- (void)resetUserEditAudioInfo;
- (void)p_updateMusicLoopInfoOfModel:(id)a0;
- (void)p_markAudioEditTipDisplay:(BOOL)a0 targetTrack:(id)a1;
- (void)p_clearBgmInfo;
- (void)p_discardPublishModelBGMInfoIfNeed;
- (void)p_removeLyricStickerTrackFromUnusedTracksArrIfNeeded;
- (id)initWithPublishModel:(id)a0 editService:(id)a1 musicService:(id)a2 advanceEditModel:(id)a3 volumeService:(id)a4 clipService:(id)a5 editKit:(id)a6 musicFeature:(id)a7;
- (void)dataSync;
- (void)sendAIClipStatueChangeSingal;
- (void)storeUnusedTracksForModel:(id)a0;
- (void).cxx_destruct;
- (void)updateAudioInfo;

@end
