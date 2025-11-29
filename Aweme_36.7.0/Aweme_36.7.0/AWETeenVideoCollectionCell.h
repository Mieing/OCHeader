@class AWETeenVideoCollectionDataController, NSString, UICollectionView, UIImageView, UIView, UILabel, UIButton;

@interface AWETeenVideoCollectionCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *enterAllVideoButton;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) AWETeenVideoCollectionDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)VIDEO_CELL_HEIGHT;
+ (double)VIDEO_CELL_WIDTH;
+ (double)VIDEO_SPACING;
+ (long long)VIDEO_NUMBER_OF_CELLS_PER_ROW;

- (void)p_setUpUI;
- (long long)videoShowCount;
- (id)collectAwemeDetailTableVCWithModel:(id)a0 itemIndex:(long long)a1;
- (void)p_enterAllVideo;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
