@class CKGenericTemplateModel, NSString;
@protocol ACCMusicModelProtocol, ACCMusicVolumeServiceProtocol, ACCEditServiceProtocol;

@interface ACCTemplateMusicViewModel : ACCEditViewModel <ACCTemplateMusicServiceProtocol>

@property (weak, nonatomic) id<ACCMusicVolumeServiceProtocol> volumeService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCMusicModelProtocol> selectedTemplateMusic;
@property (weak, nonatomic) CKGenericTemplateModel *currentTemplateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nle;
- (void)handleSelectTemplateMusic:(id)a0;
- (void)handleSelectMusic:(id)a0;
- (void)handleDeselectMusic:(id)a0 autoSelectTemplateMusic:(BOOL)a1;
- (BOOL)videoDataHasTemplateMusic;
- (void)applyTemplateRecommendMusic:(id)a0;
- (id)templateBGMTrack;
- (void)replaceTemplateBGMTrack:(id)a0 music:(id)a1;
- (void)addTemplateBGMTrackWithMusic:(id)a0;
- (void)updateTemplateTrackMuteState:(BOOL)a0;
- (void)updateTemplateBGMTrackMuteState:(BOOL)a0;
- (void)updateTemplateAllMusicTrackMuteState:(BOOL)a0;
- (void)updateSlotMuteState:(id)a0 mute:(BOOL)a1;
- (void).cxx_destruct;

@end
