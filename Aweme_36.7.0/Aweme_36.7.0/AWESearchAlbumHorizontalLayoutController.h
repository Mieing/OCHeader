@class NSArray, UICollectionView, AWEAwemeModel, NSString, BDImageView;
@protocol AWESearchAlbumHorizontalLayoutControllerDelegate;

@interface AWESearchAlbumHorizontalLayoutController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSArray *albumImages;
@property (retain, nonatomic) BDImageView *transitionView;
@property (weak, nonatomic) id<AWESearchAlbumHorizontalLayoutControllerDelegate> delegate;
@property (nonatomic) BOOL isInnerRerank;
@property (nonatomic) long long lastTapIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)syncGetSearchAlbumStyle;
+ (double)getContainerSizeFromImages:(id)a0 containerHeight:(double)a1;

- (void)updateTapIndex:(long long)a0;
- (id)currentTransitionView;
- (void)didEndShowing;
- (void)updateWithIndex:(long long)a0;
- (void)updateTransitionViewWithIndex:(long long)a0;
- (void)willStartShowing;
- (void)resetTapInfo;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)transitionContext;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateWithModel:(id)a0;

@end
