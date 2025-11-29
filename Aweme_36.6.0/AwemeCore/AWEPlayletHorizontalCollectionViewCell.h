@class NSString, UICollectionView, AWEPlayletScrollTailView, UIView, AWEPlayletCardInfoModel, AWEPlayletUserProfileTabCollectionHeaderView;

@interface AWEPlayletHorizontalCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *horizontalList;
@property (retain, nonatomic) AWEPlayletCardInfoModel *playletCardModel;
@property (retain, nonatomic) AWEPlayletUserProfileTabCollectionHeaderView *headerView;
@property (retain, nonatomic) AWEPlayletScrollTailView *footerView;
@property (nonatomic) BOOL isTransfering;
@property (nonatomic) double currentOffset;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double originalScrollViewOffset;
@property (nonatomic) BOOL containJustSeenItem;
@property (copy, nonatomic) id /* block */ enterPlayletFeedListBlock;
@property (copy, nonatomic) NSString *justSeenAwemeID;
@property (nonatomic) BOOL isCurrentUserLogin;
@property (copy, nonatomic) id /* block */ playletDetailLogExtraDicBLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithCardModel:(id)a0;
+ (double)headerViewHeight;
+ (id)identifier;

- (void)scrollToIndex:(long long)a0;
- (void)configWithModel:(id)a0;
- (void)updateFooterFrame;
- (void)enterFeedShouldWithWatchedHistory;
- (void)enterFeedList:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setUpUI;

@end
