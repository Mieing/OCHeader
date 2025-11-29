@class NSArray, NSDictionary, UICollectionView, AWELVideoBriefInfoModel, NSString;
@protocol AWELongVideoSelectPanelSegmentViewDelegate;

@interface AWELongVideoSelectPanelSegmentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long currentSegmentIndex;
@property (nonatomic) long long lastSegmentIndex;
@property (nonatomic) BOOL firstScroll;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSArray *widthOfSegments;
@property (copy, nonatomic) NSArray *startEpisodes;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (retain, nonatomic) AWELVideoBriefInfoModel *LVideoBriefInfo;
@property (nonatomic) unsigned long long episodesPerSeg;
@property (weak, nonatomic) id<AWELongVideoSelectPanelSegmentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithLVideoBriefInfo:(id)a0 currentEpisode:(unsigned long long)a1 segmentNum:(unsigned long long)a2;
- (long long)episodeForSegmentIndex:(long long)a0;
- (id)rangeStringForSegmentIndex:(long long)a0;
- (void)updateSelectedWithNewIndex:(id)a0 oldIndex:(id)a1;
- (void)scrollToCenterIndexPath:(id)a0 inCollectionView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
