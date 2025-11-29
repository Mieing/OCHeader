@class AWESearchCachalotResultContext, NSString, UIImageView, UICollectionView, UILabel, UIView, AWESearchRelatedVideoModel;

@interface AWEFeedSearchRelatedRecommendationCell : UICollectionViewCell <AWESearchCachalotCardViewProtocol, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *searchIconView;
@property (retain, nonatomic) UIView *searchIconContainerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWESearchRelatedVideoModel *model;
@property (nonatomic) long long maxNumberOfItems;
@property (copy, nonatomic) id /* block */ didSelectRecommendedationBlock;
@property (retain, nonatomic) AWESearchCachalotResultContext *cellCachalotContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (long long)maxNumberOfRowsForSize:(struct CGSize { double x0; double x1; })a0;
+ (long long)enableStyleOpt;
+ (BOOL)notShowRSCardWithModel:(id)a0;
+ (BOOL)fixGuideSearchMoreFetch;
+ (long long)doubleColumnCellCount;
+ (id)searchDoubleColumnRSOptDic;

- (void)postKeywordDidUpdateNotificationWithKeyword:(id)a0 enterMethod:(id)a1;
- (BOOL)enableAddTitleIcon;
- (double)titleMarginTop;
- (double)titleMarginRight;
- (double)titleMarginLeft;
- (double)collectionViewToTitleMarginTop;
- (double)collectionViewMarginLeft;
- (double)collectionViewMarginRight;
- (double)collectionViewMarginBottom;
- (unsigned long long)wordMultiLines;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
