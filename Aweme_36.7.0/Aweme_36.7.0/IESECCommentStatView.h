@class NSArray, IESECCommentStatCollectionLayout, UICollectionView, NSString, NSMutableArray, IESECGoodsCommentModel;
@protocol IESECCommentStatCellLayoutSizeDelegate, IESECCommentStatDelegate;

@interface IESECCommentStatView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

@property (retain, nonatomic) IESECCommentStatCollectionLayout *collectionViewFlowLayout;
@property (retain, nonatomic) id<IESECCommentStatCellLayoutSizeDelegate> layoutDelegate;
@property (copy, nonatomic) NSArray *tagsArray;
@property (retain, nonatomic) NSMutableArray *alreadyTrackTagArray;
@property (retain, nonatomic) IESECGoodsCommentModel *commentInfo;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECCommentStatDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateTagsArrayWithCurrentCommentInfo:(id)a0;
+ (id)generateTagsArrayWithShopCommentInfo:(id)a0;
+ (double)getHeightWithArray:(id)a0;
+ (id)generateCommentNumberString:(id)a0;
+ (double)heightForCommentInfo:(id)a0;
+ (double)heightForShopComment:(id)a0;

- (BOOL)isTrackOnce:(id)a0;
- (struct CGSize { double x0; double x1; })statItemSizeWithStat:(id)a0;
- (void)reloadWithCommentInfo:(id)a0;
- (void)reloadWithShopCommentInfo:(id)a0;
- (void)p_setupUI;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)reset;
- (void)reload:(id)a0;

@end
