@class UIView, ACCGradientView, NSString, ACCPicTemplateApplyAllButton, ACCPicTemplateThumbnailViewModel, ACCRepositoryWorkspace, UICollectionView, NSMutableArray;
@protocol ACCPicTemplatePanelService, ACCEditPicTemplateServiceProtocol, ACCPicTemplateTrackServiceProtocol, ACCPicTemplatePanelDataProtocol;

@interface ACCPicTemplateThumbnailComponent : ACCSecondaryPageComponent <UICollectionViewDelegate, UICollectionViewDataSource, ACCPicTemplatePanelServiceSubScriber, ACCSequenceEditServicePlayerSubscriber>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCPicTemplateThumbnailViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) ACCPicTemplateApplyAllButton *applyAllBtn;
@property (retain, nonatomic) ACCGradientView *gradientView;
@property (weak, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (weak, nonatomic) id<ACCPicTemplatePanelDataProtocol> dataManager;
@property (weak, nonatomic) id<ACCEditPicTemplateServiceProtocol> picTemplateService;
@property (weak, nonatomic) id<ACCPicTemplatePanelService> panelService;
@property (weak, nonatomic) id<ACCPicTemplateTrackServiceProtocol> trackService;
@property (nonatomic) BOOL isChanging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)componentDidMount;
- (id)serviceBinding;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)refreshCoverWithProject:(id)a0;
- (void)picTemplatePanelServiceDidSelectedTemplate:(id)a0;
- (void)picTemplatePanelServiceDidRemoveTemplate;
- (BOOL)isSelected:(id)a0;
- (BOOL)shouldShowApplyAllBtn;
- (void)updateApplyAllBtnStatus;
- (void)applyAll;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;

@end
