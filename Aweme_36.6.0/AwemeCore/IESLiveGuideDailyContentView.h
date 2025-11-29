@class NSString, NSMutableArray, UICollectionView;
@protocol IESLiveGuideDailyContentViewDelegate;

@interface IESLiveGuideDailyContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *dataItems;
@property (nonatomic) BOOL needForceSwitch;
@property (nonatomic) long long centerSelectedIndex;
@property (nonatomic) double lastContentOffsetX;
@property (weak, nonatomic) id<IESLiveGuideDailyContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupDatas;
- (void)setSwitchIndex:(id)a0 animated:(BOOL)a1;
- (void)updateStickerImage:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupCollectionView;
- (void)setupViews;

@end
