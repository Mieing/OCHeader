@class NSString, ACCImageAlbumThumbnailListDeleteView, UIView, ACCImageAlbumThumbnailListContainerView;
@protocol ACCEditServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCVideoEditBottomControlService, ACCImageAlbumThumbnailFeatureServiceProtocol;

@interface ACCImageAlbumThumbnailComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCImageAlbumThumbnailListContainerViewDelegate, ACCEditImageAlbumMixedMessageProtocolD, ACCVideoEditFlowControlSubscriber>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) id<ACCImageAlbumThumbnailFeatureServiceProtocol> featureService;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCImageAlbumThumbnailListContainerView *thumbnailListContainerView;
@property (retain, nonatomic) ACCImageAlbumThumbnailListDeleteView *imageAlbumDeleteView;
@property (retain, nonatomic) UIView *draggingCurrentView;
@property (nonatomic) BOOL showDeleteLimitToast;
@property (nonatomic) BOOL didHandleDefaultShow;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> editBottomControlService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)didQuickPublishGuideDismiss:(id)a0;
- (void)firstRenderWithEditService:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)onCurrentImageEditorChanged:(long long)a0 isByAutoTimer:(BOOL)a1;
- (void)onImagePlayerWillScrollToIndex:(long long)a0 withAnimation:(BOOL)a1 isByAutoTimer:(BOOL)a2;
- (id)p_commonTrackParams;
- (BOOL)p_disableImageAlbumThumbnailModule;
- (void)p_updateProgressView;
- (void)p_addThumbnailListContainerViewIfNeed;
- (void)p_showThumbnailListTipView;
- (void)p_trackClickAddButton;
- (void)p_trackOpenAlbumViewController;
- (void)p_trackSelectAlbumAsset;
- (void)p_trackClickNextButtonAfterSelectAlbumAssetIfIsMultiContent:(BOOL)a0;
- (void)p_trackClickThumbnailListItemAtIndex:(long long)a0;
- (void)p_trackDeleteThumbnailListItem:(long long)a0;
- (void)p_trackMoveThumbnailListItemFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)p_trackPreviewAlbumAssestWithIfIsSelected:(BOOL)a0;
- (void)didClickAddButtonInThumbnailListAndAddView:(id)a0;
- (void)didOpenAlbumViewControllerInThumbnailListAndAddView:(id)a0;
- (void)didSelectAlbumAssetInThumbnailListAndAddView:(id)a0;
- (void)thumbnailListAndAddView:(id)a0 didClickNextButtonWithMultiContentStatus:(BOOL)a1;
- (void)thumbnailListAndAddView:(id)a0 didPreviewAlbumAssetWithSelectedStatus:(BOOL)a1;
- (void)thumbnailListAndAddView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)thumbnailListAndAddView:(id)a0 didMoveItemFromIndex:(long long)a1 toIndex:(long long)a2 newCoverIndex:(long long)a3;
- (void)thumbnailListAndAddView:(id)a0 didEditWithNewData:(id)a1 selectedAssets:(id)a2;
- (void)thumbnailListAndAddView:(id)a0 willBeginDraggingItemAtIndex:(long long)a1;
- (void)thumbnailListAndAddView:(id)a0 draggingCurrentView:(id)a1 fromCollectionView:(id)a2;
- (void)thumbnailListAndAddView:(id)a0 willEndDraggingItemFromIndex:(long long)a1 toIndex:(long long)a2;
- (void).cxx_destruct;

@end
