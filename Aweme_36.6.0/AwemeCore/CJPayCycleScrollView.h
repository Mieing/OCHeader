@class NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout;

@interface CJPayCycleScrollView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) NSTimer *autoScrollTimer;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) long long originalItems;
@property (nonatomic) long long totalItems;
@property (nonatomic) long long currentPageIndex;
@property (nonatomic) BOOL fadeAnimationFinish;
@property (weak, nonatomic) id delegate;
@property (nonatomic) long long scrollAnimationOption;
@property (nonatomic) double scrollIntervalDuration;
@property (nonatomic) double scrollAnimateDuration;
@property (nonatomic) BOOL isStopAutoScrollInSingleItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotification;
- (void)scrollViewDidEndScroll;
- (void)setupUIWithCollectionViewLayout:(id)a0;
- (void)buildTimer;
- (void)resetContentOffsetWithTargetItemIndex:(long long)a0;
- (void)fadeInAndOut:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)getCurrentConfigAnimationOptions;
- (BOOL)p_shouldAutoScroll;
- (void)stopTimer;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateTimer;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)registerClass:(Class)a0 forCellWithReuseIdentifier:(id)a1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)a0 forIndex:(long long)a1;

@end
