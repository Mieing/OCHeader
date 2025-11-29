@class UIStackView, ACCImageAlbumThumbnailListAndAddView, NSString, UIView, AWEVideoPublishViewModel, UITapGestureRecognizer;
@protocol ACCImageAlbumThumbnailListContainerViewDelegate, ACCEditServiceProtocol;

@interface ACCImageAlbumThumbnailListContainerView : UIView <ACCImageAlbumThumbnailListAndAddViewDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCImageAlbumThumbnailListAndAddView *thumbnailListAndAddView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIStackView *thumbnailListShowTipView;
@property (nonatomic) BOOL isThumbnailListFolded;
@property (nonatomic) BOOL touchPointInContainer;
@property (retain, nonatomic) UIView *playGestureView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<ACCImageAlbumThumbnailListContainerViewDelegate> delegate;
@property (nonatomic) BOOL disableAddImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSwipeAction:(id)a0;
- (void)scrollToItemAtIndex:(long long)a0;
- (void)p_addGesture;
- (void)p_setupViews;
- (void)reloaData;
- (void)updateThumbnailListShowStatusWithNeedShow:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithPublishViewModel:(id)a0 editService:(id)a1 gestureView:(id)a2;
- (void)showThumbnailListTipView;
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
- (void)p_showThumbnailListTipViewIfNeeded;
- (void)p_setupThumbnailListShowTipView;
- (void).cxx_destruct;
- (void)handleTapAction:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)removeItemAtIndex:(long long)a0;

@end
