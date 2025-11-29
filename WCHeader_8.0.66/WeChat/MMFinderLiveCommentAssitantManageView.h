@class NSArray, UIImageView, UICollectionView, UILabel, MMFinderLiveCommentAssitantManageViewModel, NSString;

@interface MMFinderLiveCommentAssitantManageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) MMFinderLiveCommentAssitantManageViewModel *viewModel;
@property (nonatomic) double safeAreaTop;
@property (retain, nonatomic) NSArray *assistants;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) double collectionViewItemPerRow;
@property (nonatomic) double contentTopMargin;
@property (nonatomic) BOOL ignoreSafeArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)reloadData;
- (double)getCollectionViewItemWidth;
- (double)getCollectionViewWidth;
- (void)initUI;
- (void)layoutUI;
- (BOOL)assistantsReachMaxCount;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
