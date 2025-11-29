@class ACCCameraSubscription, NSArray, NSString, AWEBinding, UIView;
@protocol ACCEditOneClickFilmApplyServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditorOneClickFilmingApplyDiffService, ACCEditServiceProtocol, ACCEditMusicServiceProtocol, AEKEditMediaGenrePublicAPI, ACCEditorOneClickFilmService;

@interface ACCEditorOneClickFilmingViewModel : ACCEditViewModel <ACCEditorOneClickFilmingViewModelProtocol>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingApplyDiffService> oneClickFilmingApplyDiffService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyServiceProtocol> applyService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<AEKEditMediaGenrePublicAPI> mediaGenreService;
@property (retain, nonatomic) AWEBinding *aigcTryReloadOneClickFilmSignal;
@property (copy, nonatomic) NSArray *originalProjectUUIDList;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) struct _HTSAudioRange { double location; double length; } backupAudioRange;
@property (weak, nonatomic) UIView *sequenceMediaContainerSuperView;
@property (nonatomic) double indecateViewAlpha;
@property (readonly, nonatomic) BOOL disableTextStickerInputWithTapGes;
@property (nonatomic) struct CGSize { double width; double height; } editPreviewSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerOriginalFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bigMediaOriginalFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTemplateBindedMusicIfNeed;
- (void)handleDidSelectMusic:(id)a0;
- (void)combineMultiProjectToOneProject;
- (void)restoreProjectToMultiProject;
- (void)backupPublishViewModel;
- (void)toggleLoadingViewState:(BOOL)a0;
- (void)showAIGCLoadingViewWithDelay;
- (void)hideAIGCLoadingView;
- (void)showAIGCLoadingView;
- (void)trackRemoveTemplateModel:(id)a0;
- (void)storeOrignalProjectUUIDList;
- (void)handleDidDeselectMusic:(id)a0;
- (void)handleDidFinishCutMusic:(id)a0;
- (BOOL)isAppliedMusicBeatsTemplate;
- (void)exitOneClickFilmingWhenCancel;
- (void)exitOneClickFilmingWhenSave;
- (id)assetModelWithFileURL:(id)a0;
- (id)combineMultiProjectToOneAssetWithAssetDic:(id)a0;
- (void)addNLECanvasStyleIfNeeded:(id)a0;
- (void)switchRepoContextInfo;
- (void)combineMultiProjectToOneProjectV2;
- (void)combineMultiProjectToOneProjectV1;
- (void)restoreTemplateWithLastTemplateHasStickers:(BOOL)a0;
- (void)updateBackupAudioRange;
- (void)trackRemoveTemplateId:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)cleanData;

@end
