@class UIView, NSString, ACCImageAlbumThumbnailListAddView, AWEVideoPublishViewModel, NSMutableDictionary, CAGradientLayer, UICollectionView, NSMutableArray;
@protocol ACCEditServiceProtocol, ACCImageAlbumThumbnailListAndAddViewDelegate;

@interface ACCImageAlbumThumbnailListAndAddView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, ACCReorderableForCollectionViewDelegateFlowLayout, ACCReorderableForCollectionViewDataSource, ACCImageAlbumThumbnailListAddViewDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *imageInputInfoList;
@property (retain, nonatomic) NSMutableDictionary *imageCacheMap;
@property (nonatomic) long long fromIndex;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isDraggingItem;
@property (nonatomic) BOOL hasDeleteAction;
@property (nonatomic) double imageViewWidth;
@property (nonatomic) double itemsMinimumLineSpacing;
@property (retain, nonatomic) UIView *gradientContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) ACCImageAlbumThumbnailListAddView *addImageView;
@property (nonatomic) BOOL disableAddImage;
@property (weak, nonatomic) id<ACCImageAlbumThumbnailListAndAddViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToItemAtIndex:(long long)a0;
- (void)p_setupViews;
- (void)didClickAddButtonInThumbnailListAddView:(id)a0;
- (void)didOpenAlbumViewControllerInThumbnailListAddView:(id)a0;
- (void)didSelectAlbumAssetInThumbnailListAddView:(id)a0;
- (void)thumbnailListAddView:(id)a0 backToViewController:(id)a1 withSelectedAssets:(id)a2 completion:(id /* block */)a3;
- (void)thumbnailListAddView:(id)a0 didPreviewAlbumAssetWithSelectedStatus:(BOOL)a1;
- (void)accReorderableCollectionView:(id)a0 itemAtIndexPath:(id)a1 willMoveToIndexPath:(id)a2;
- (void)accReorderableCollectionView:(id)a0 layout:(id)a1 willBeginDraggingItemAtIndexPath:(id)a2;
- (void)accReorderableCollectionView:(id)a0 layout:(id)a1 willEndDraggingItemAtIndexPath:(id)a2;
- (void)accReorderableCollectionView:(id)a0 layout:(id)a1 didEndDraggingItemAtIndexPath:(id)a2;
- (void)accReorderableCollectionView:(id)a0 layout:(id)a1 didDragItemAtIndexPath:(id)a2 currentView:(id)a3;
- (void)p_setGradientMaskLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrameWithMaxWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrameWithWidth:(double)a0;
- (double)p_collectionViewWidth;
- (void)reloadThumbnailListData;
- (void)p_updateItemSeletedStatus:(BOOL)a0 atIndex:(long long)a1;
- (double)p_collectionViewContentWidth;
- (double)p_maxCollectionViewWidth;
- (void)p_didEndDraggingByMoveItemToIndex:(long long)a0;
- (long long)calDraggedCoverIndex:(long long)a0;
- (BOOL)enableAddImage;
- (id)initWithPublishViewModel:(id)a0 editService:(id)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)removeItemAtIndex:(long long)a0;

@end
