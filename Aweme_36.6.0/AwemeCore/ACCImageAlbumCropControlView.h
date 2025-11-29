@class NSArray, ACCImageAlbumThumbnailListAndCropControlView, UICollectionView, NSString, ACCImageAlbumItemCropInfo, UIButton;
@protocol ACCImageAlbumCropControlDelegate;

@interface ACCImageAlbumCropControlView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) ACCImageAlbumThumbnailListAndCropControlView *thumbnailListAndCropControlView;
@property (retain, nonatomic) UICollectionView *ratioCollectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) ACCImageAlbumItemCropInfo *cropInfo;
@property (retain, nonatomic) UIButton *sortButton;
@property (retain, nonatomic) UIButton *cropButton;
@property (weak, nonatomic) id<ACCImageAlbumCropControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (void)p_setupLayout;
- (BOOL)croppingImageIsDragging;
- (id)p_modelFromDictionay:(id)a0;
- (void)handleCloseAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handleConfirmAction:(id)a0;

@end
