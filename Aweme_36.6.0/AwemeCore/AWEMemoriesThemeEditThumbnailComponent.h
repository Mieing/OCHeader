@class UIView, CAKModalTransitionDelegate, NSArray, NSString, AWEAssetsCropAndClipManager, UIImageView, UICollectionView, UILabel;
@protocol ACCEditOneClickFilmApplyServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCGenericTemplateApplierService, ACCEditClipV1ServiceProtocol, ACCEditorOneClickFilmingSideSlipPanelServiceProtocol, AWEMemoriesThemeEditSecondaryService, ACCEditGenericEffectPanelService, ACCEditViewContainer, ACCEditorOneClickFilmService, ACCVideoEditAIMusicClipService, ACCEditorOneClickFilmListFetchService;

@interface AWEMemoriesThemeEditThumbnailComponent : ACCSecondaryPageComponent <ACCEditPreviewMessageProtocol, UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *thumbnailCollectionView;
@property (retain, nonatomic) UIView *bottomEditPanel;
@property (retain, nonatomic) UILabel *bottomHintLabel;
@property (retain, nonatomic) UIImageView *deleteImageView;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (nonatomic) long long currentPlayIndex;
@property (nonatomic) long long currentSelectedIndex;
@property (copy, nonatomic) NSArray *currentTrackSlots;
@property (copy, nonatomic) NSArray *currentDynamicTrackSlots;
@property (copy, nonatomic) NSArray *cellModelArray;
@property (retain, nonatomic) CAKModalTransitionDelegate *modalTransDelegate;
@property (retain, nonatomic) AWEAssetsCropAndClipManager *cropAndClipManager;
@property (weak, nonatomic) id<AWEMemoriesThemeEditSecondaryService> themeEditSecondaryService;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyServiceProtocol> applyService;
@property (weak, nonatomic) id<ACCEditClipV1ServiceProtocol> clipV1Service;
@property (weak, nonatomic) id<ACCVideoEditAIMusicClipService> aiMusicClipService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> playControlService;
@property (nonatomic) BOOL isFirstAppear;
@property (weak, nonatomic) id<ACCGenericTemplateApplierService> applierService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmListFetchService> oneClickFilmFetchListService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmingSideSlipPanelServiceProtocol> oneClickFilmSideSlipPanelService;
@property (weak, nonatomic) id<ACCEditGenericEffectPanelService> genericEffectPanelService;
@property (weak, nonatomic) id<ACCEditOneClickFilmApplyServiceProtocol> oneClickFilmApplyService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)playerCurrentPlayTimeChanged:(double)a0;
- (id)nle;
- (void)componentDidMount;
- (void)playStatusChanged:(long long)a0;
- (id)commonTrackDictWithPost;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)reloadSegmentDisplay;
- (id)coverOfVideoSlot:(id)a0 draftPath:(id)a1 preferSize:(struct CGSize { double x0; double x1; })a2;
- (void)updateAppliedTemplateWithReplaceSlots:(id)a0 isReplaceMaterial:(BOOL)a1;
- (void)writeAssetToLocalPath:(id)a0 completion:(id /* block */)a1;
- (id)cropImage:(id)a0 slotInfo:(id)a1;
- (id)generateCustomView:(id)a0 titleText:(id)a1;
- (void)replaceSegmentAction;
- (void)clipSegmentAction;
- (void)updateEditPanelHidden:(BOOL)a0 completion:(id /* block */)a1;
- (void)fetchCurrentFragmentSlots;
- (id)coverOfVideoSlot:(id)a0 dynamicSlot:(id)a1 draftPath:(id)a2 preferSize:(struct CGSize { double x0; double x1; })a3;
- (long long)calculateCurrentPlayIndex:(double)a0;
- (void)deleteAIClipVideoWithSelectClip;
- (void)deleteTemplateVideoWithSelectClip;
- (void)updateRepoModelAssetList:(id)a0;
- (void)deleteSegmentAction;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setupUI;

@end
