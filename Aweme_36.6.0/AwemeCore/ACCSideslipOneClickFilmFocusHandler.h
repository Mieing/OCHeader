@class CKGenericTemplateModel, NSString, ACCSideslipPropPanelApplyTrackerHelper;
@protocol ACCEditOneClickFilmPanelServiceProtocol, ACCEditOneClickFilmTrackService, ACCSideslipPropPanelListDataProvider, ACCSequencePlayControlServiceProtocol, ACCOneClickFilmPanelTrackerService, ACCEditOneClickFilmApplyServiceProtocol, ACCSideslipPropService, ACCSideslipPropPanelService, ACCEditorOneClickFilmService, ACCEditorOneClickFilmingApplyDiffService, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCEditorOneClickFilmingSideSlipPanelServiceProtocol, ACCSideslipPropPanelTrackerService, ACCEditServiceProtocol;

@interface ACCSideslipOneClickFilmFocusHandler : ACCSideslipBaseFocusHandler <ACCSequenceEditServicePlayerSubscriber, ACCEditPreviewMessageProtocol> {
    BOOL hasApplyPropFailed;
}

@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> sequencePlayControl;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyServiceProtocol> applyService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingApplyDiffService> oneClickFilmingApplyDiffService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingSideSlipPanelServiceProtocol> enterService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (weak, nonatomic) id<ACCEditOneClickFilmPanelServiceProtocol> genericEffectPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCOneClickFilmPanelTrackerService> genericEffectPanelTrackerService;
@property (weak, nonatomic) id<ACCEditOneClickFilmTrackService> trackService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSideslipPropPanelListDataProvider> listDataProvider;
@property (retain, nonatomic) ACCSideslipPropPanelApplyTrackerHelper *applyTrackerHelper;
@property (retain, nonatomic) CKGenericTemplateModel *lastSelectedTemplateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindService;
- (void)playerPlayToEnd;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)handleItemPickedIsScrollByUserDrag:(BOOL)a0;
- (BOOL)hasApplyPropFailed;
- (void)handleRemoveApplyedEffectOrTemplateIfNeededWith:(id)a0;
- (void)resetPropTryStartTimeIfNeeded;
- (void)trackPropTryFinishEventIfNeeded;
- (void)trackPropTry;
- (id)applyedEffectId;
- (void)applyModel:(id)a0 index:(long long)a1 forbidPlay:(BOOL)a2;
- (void)applyModel:(id)a0 index:(long long)a1;
- (id)repoOneClickFilmModel;
- (void)updatePreviewPlayStatusWithWorkspaceStatus:(BOOL)a0;
- (void)setHasApplyPropFailed:(BOOL)a0;
- (BOOL)shouldShowSegmentEditDisableToast:(id)a0;
- (void)handleApplyWithTemplateModel:(id)a0 currentIndex:(long long)a1;
- (void)handlePickedPropApplyIfNeededByUserDrag:(BOOL)a0;
- (void)handleCancelPickedPropIfNeededWithSource:(unsigned long long)a0;
- (id)applyTrackerService;
- (void)handleApplyWithTemplateModel:(id)a0 currentIndex:(long long)a1 forbidPlay:(BOOL)a2;
- (void).cxx_destruct;

@end
