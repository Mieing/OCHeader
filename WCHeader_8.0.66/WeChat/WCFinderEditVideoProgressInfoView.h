@class NSString, UICollectionView, WCFinderEditVideoPorgressInfoViewModel, UIView, EditVideoAttr, NSMutableArray;
@protocol WCFinderEditVideoProgressInfoViewDelegate;

@interface WCFinderEditVideoProgressInfoView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *line;
@property (weak, nonatomic) WCFinderEditVideoPorgressInfoViewModel *viewModel;
@property (nonatomic) unsigned long long triggerTime;
@property (nonatomic) BOOL isScrollingTriggerByPlayer;
@property (retain, nonatomic) EditVideoAttr *attr;
@property (retain, nonatomic) NSMutableArray *videoPieceDuration;
@property (weak, nonatomic) id<WCFinderEditVideoProgressInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewH;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setupWithProgressVM:(id)a0;
- (BOOL)isDragging;
- (void)setProgress:(double)a0 withAnimatedDuration:(double)a1;
- (void)layoutSubviews;
- (void)reloadCollectionView;
- (void)updateWithEditVideoAttr:(id)a0;
- (void)generateVideoPieceDurationArray;
- (unsigned long long)currentPlayIndex;
- (double)getProgress;
- (void)onDrag:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void).cxx_destruct;

@end
