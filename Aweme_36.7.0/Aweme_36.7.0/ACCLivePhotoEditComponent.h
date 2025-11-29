@class UILabel, NSString, AWEStudioEditLivePhotoFeatureConfig;
@protocol ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCEditTextReaderServiceProtocol, ACCEditServiceProtocol, ACCCTRServiceProtocol, ACCAIImageToLiveEditServiceProtocol, AEKEditMediaGenrePublicAPI, ACCEditMusicServiceProtocol, ACCAIGCEffectServiceProtocol, ACCTopToolBarServiceProtocol;

@interface ACCLivePhotoEditComponent : ACCFeatureComponent <ACCFeatureComponentReloadableProtocol, ACCSequenceEditServicePlayerSubscriber, AEKEditMediaGenreTransferSubscriber>

@property (retain, nonatomic) AWEStudioEditLivePhotoFeatureConfig *featureConfig;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCEditTextReaderServiceProtocol> editTextReaderService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCAIGCEffectServiceProtocol> aigcService;
@property (weak, nonatomic) id<ACCAIImageToLiveEditServiceProtocol> aiImageToLiveService;
@property (weak, nonatomic) id<AEKEditMediaGenrePublicAPI> mediaGenreTransferService;
@property (weak, nonatomic) id<ACCTopToolBarServiceProtocol> topToolBarService;
@property (retain, nonatomic) UILabel *livePhotoModeNameLabel;
@property (nonatomic) BOOL hasShowedTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)editMediaGenreDidTransferFromSourceType:(unsigned long long)a0 toTargetType:(unsigned long long)a1 success:(BOOL)a2 scene:(id)a3;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (unsigned long long)componentLoadState;
- (void)bindViewModel;
- (void)bindServices:(id)a0;
- (void)addBarItemToToolBar;
- (void)componentDidReload;
- (void)componentWillReload;
- (void)bindLoraUpdateTrackSignal;
- (void)bindImageToLiveUpdateTrackSignal;
- (void)updateLivePhotoMode;
- (void)observeMultiEditorSignal;
- (void)p_updateLivePhotoBarItemView:(unsigned long long)a0;
- (void)showLivePhotoModeTipsIfNeeded;
- (void)updateLivePhotoBarItemForStaticImage;
- (id)livePhotoBarItem;
- (id)barItemImageName;
- (id)barItemTitle;
- (void)updateTopToolBarItemIfNeededWithEnableStatus:(BOOL)a0;
- (void)livePhotoClicked;
- (void)observeSingleEditorSignal;
- (void)updateTextReadingClipRange;
- (void)dealLoraUpdateTrackSignal;
- (id)topToolBarItemImageName;
- (void)showLivePhotoNameLabelWithTypeName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLivePhoto;
- (id)containerViewController;

@end
