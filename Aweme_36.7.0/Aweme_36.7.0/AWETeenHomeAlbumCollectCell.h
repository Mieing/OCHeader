@class AWETeenAlbumCollectListDataController, NSString, UICollectionView, UIImageView, UIView, UILabel, UIButton;

@interface AWETeenHomeAlbumCollectCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, AWETeenAlbumMessage>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *enterAllAlbumButton;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) AWETeenAlbumCollectListDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)ALBUM_CELL_HEIGHT;
+ (double)ALBUM_CELL_WIDTH;
+ (double)ALBUM_SPACING;
+ (long long)ALBUM_NUMBER_OF_CELLS_PER_ROW;

- (id)enterFrom;
- (id)enterPosition;
- (void)updateWatchedAlbumModel:(id)a0;
- (long long)albumShowCount;
- (void)p_enterAllAlbumCollectList;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)dealloc;

@end
