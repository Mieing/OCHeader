@class NSString, UICollectionView, UIView, AWECoCreatorPostListCellModel;

@interface AWECoCreatorPostListCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWECoCreatorPostListCellModel *model;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *fakeLoadingView;
@property (retain, nonatomic) UIView *cornerBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (double)cellWidth;
+ (double)cellHeight;
+ (double)containerWidth;

- (void)trackEnterPersonalDetail:(id)a0;
- (void)updateWithModel:(id)a0 showLoading:(BOOL)a1;
- (void)updatesSubviews;
- (BOOL)exitCurrentVCIfNeeded;
- (BOOL)shouldShowCountMaskLayer:(id)a0;
- (void)enterUserProfilePageWithIndexPath:(id)a0;
- (void)enterUserPostListWithIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)configureSubviews;

@end
