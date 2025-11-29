@class NSString, UICollectionView, MMFinderLiveMultiAngleView, MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderLiveAngleViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLiveMultiAngleView *angleView;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (nonatomic) long long selectRow;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) BOOL isCoverSpam;
@property (retain, nonatomic) NSString *coverSpamText;
@property (retain, nonatomic) UICollectionView *mainCollectionView;
@property (nonatomic) BOOL enableRotate;
@property (nonatomic) unsigned long long seq;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLiveTaskId:(id)a0 angleView:(id)a1;
- (id)audioModeCoverImageUrlString:(id)a0;
- (void)updateData:(id)a0;
- (void)showWithAnimated;
- (void)dismissWithAnimated;
- (id)liveTask;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)getItemWidth;
- (double)getItemHeight;
- (double)getAspectRatio;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)getAngleViewCollectionViewHeight;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)endScrolling:(id)a0;
- (void)handleVisibleCell:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;

@end
