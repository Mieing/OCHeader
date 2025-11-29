@class NSString, UICollectionView, NSMutableArray, IESLiveSoloKTVTemplateSwitchViewLayout;

@interface IESLiveSoloKTVTemplateSwitchView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveSoloKTVTemplateSwitchViewLayout *layout;
@property (retain, nonatomic) NSMutableArray *cellData;
@property (nonatomic) int maxCount;
@property (copy, nonatomic) id /* block */ currentPlayTimeBlock;
@property (copy, nonatomic) id /* block */ isPlayingBlock;
@property (copy, nonatomic) id /* block */ didPlayOrPauseBlock;
@property (copy, nonatomic) id /* block */ didSeekBlock;
@property (copy, nonatomic) id /* block */ didProgresseChangedBlock;
@property (copy, nonatomic) id /* block */ didStartScrollBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)currentSelectedIndex;
- (void)scrollToCenter;
- (void)stopAllVideo;
- (void)updateAllCover;
- (void)updateSelectedCover;
- (void)seekSelectedVideo:(double)a0 autoPlay:(BOOL)a1;
- (double)outsidePlayingTime;
- (BOOL)outsideIsPlaying;
- (void)scrollWillBegin;
- (void)scrollDidStop;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)currentItem;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)currentCell;
- (void)updateModel:(id)a0;

@end
