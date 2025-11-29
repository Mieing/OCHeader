@class NSArray, ACCSlidesBeatSequenceWrapper, ACCSlidesBeatSequenceGenerator, ACCEditMusicBeatsViewModel, NSString;
@protocol ACCSlidesBeatsViewModelDelegate, ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCBarItemResourceConfigManagerProtocol, ACCEditTextReaderServiceProtocol, ACCVideoConfigProtocol;

@interface ACCSlidesBeatsViewModel : ACCEditViewModel <ACCSlidesBeatsViewModelProtocol>

@property (weak, nonatomic) id<ACCBarItemResourceConfigManagerProtocol> barItemConfigManager;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditTextReaderServiceProtocol> editTextReaderService;
@property (retain, nonatomic) ACCSlidesBeatSequenceGenerator *beatSequenceGenerator;
@property (retain, nonatomic) ACCSlidesBeatSequenceWrapper *beatSequenceWrapper;
@property (nonatomic) unsigned long long musicBeatsResult;
@property (nonatomic) unsigned long long slidesMediaType;
@property (nonatomic) BOOL musicBeatsOn;
@property (copy, nonatomic) NSArray *beatsArray;
@property (weak, nonatomic) id<ACCSlidesBeatsViewModelDelegate> delegate;
@property (retain, nonatomic) ACCEditMusicBeatsViewModel *imageAlbumBeatsVM;
@property (copy, nonatomic) id /* block */ beatsItemAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBarItemView;
- (id)fetchItemButton:(id)a0;
- (void)trackChangeSyncModeEvent:(id)a0;
- (id)fetchBeatsModeTraceValue;
- (BOOL)shouldTurnOnBeatsModeByDefault;
- (id)beatsBarItem;
- (void)switchMusicBeatsStatus:(id)a0;
- (BOOL)checkBeatsBarItemActionShouldActive:(id *)a0;
- (void)setMediaContainerViewAnimatedDuration;
- (void)shutDownSwitchNextWithAnimation;
- (void)trackChangeBeatsModeEvent:(BOOL)a0;
- (void)updateSlidesBeatsModeWithType:(unsigned long long)a0;
- (void)updateSlidesBeatsModeByLivePhoto;
- (void)updateMusicBeatsStatusByDefaultWith:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateSlidesBeatsByMusicChange:(unsigned long long)a0;
- (void)didAddMusicWithDefaultBeatsOn:(BOOL)a0;
- (void)didDeselectMusic;
- (void)updateMusicBeatsResult;
- (double)musicTimeForProject:(id)a0;
- (void)unbindSlidesBeatsStatus;
- (double)matchBeatWithProject:(id)a0 time:(double)a1 ignorePlayerTime:(BOOL)a2;
- (void)openBeatsWhenSingleToMultiProjects:(BOOL)a0;
- (void)updateBeatsWhenMultiToMultiProjectsAndMultiToSingleProject:(unsigned long long)a0;
- (void)updateSlidesBeatsItemView;
- (void)updateSlidesBeatsByTrim;
- (unsigned long long)slidesMediaTypeOfWorkspace:(id)a0;
- (void)openMusicBeatsWithMusic:(id)a0 showResultToast:(BOOL)a1 byUser:(BOOL)a2 isDefault:(BOOL)a3 blockClip:(BOOL)a4 completion:(id /* block */)a5;
- (void)p_updateBeatSequenceGeneratorConfig;
- (BOOL)isMusicBeatsEnable;
- (void)refreshImageBeatsWithMusic:(id)a0 complection:(id /* block */)a1;
- (BOOL)p_openSlidesMusicBeats;
- (void)p_closeSlidesMusicBeats;
- (unsigned long long)beatMediaTypeOfProject:(id)a0;
- (double)elasticDurationWithProject:(id)a0;
- (void)p_updateSlidesBeatsArrayWithType:(unsigned long long)a0;
- (id)p_generateProjectsClipRangeForMusicBeatsForUpdate:(BOOL)a0;
- (void)p_clearProjectsClipRangeForMusicBeatsOff;
- (id)p_updateProjectClipRangeWithStartTime:(double)a0 project:(id)a1;
- (id)p_genertateProjectClipRangeWithStartTime:(double)a0 project:(id)a1;
- (void)updateTextReadingRangeForProject:(id)a0;
- (double)timeDurationForProject:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
