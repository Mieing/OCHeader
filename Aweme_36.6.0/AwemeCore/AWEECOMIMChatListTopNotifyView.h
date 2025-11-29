@class NSString, UIImageView, UICollectionView, UIView, NSMutableSet, AWEECOMIMTopNotifyDataSource;

@interface AWEECOMIMChatListTopNotifyView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEECOMIMTopNotifyDataSource *dataSource;
@property (nonatomic) long long realShowCount;
@property (retain, nonatomic) NSMutableSet *itemDisplayedSet;
@property (copy, nonatomic) id /* block */ viewWillDisplayTrack;
@property (copy, nonatomic) id /* block */ viewClickTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeightWithDataSource:(id)a0 viewWidth:(double)a1;
+ (double)cardItemWidthWithDataSource:(id)a0 viewWidth:(double)a1;

- (void)updateTopNotifyViewWithDataSource:(id)a0;
- (id)trackCardDisplayParamsWithModel:(id)a0 index:(long long)a1 showCardScene:(id)a2;
- (double)contentOffsetXWithShowCount:(long long)a0;
- (id)trackParamsWithModel:(id)a0 otherParams:(id)a1;
- (void)changePageWithTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
