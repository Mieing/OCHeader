@class NSNumber, NSArray, UICollectionView, NSValue, NSDictionary, NSString, UITableView;
@protocol AWEMixVideoEpisodeSegmentViewDelegate;

@interface AWEMixVideoEpisodeSegmentView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEMixVideoEpisodeSegmentViewProtocol>

@property (weak, nonatomic) UITableView *container;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long currentSegmentIndex;
@property (nonatomic) long long lastSegmentIndex;
@property (nonatomic) BOOL firstScroll;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSArray *widthOfSegments;
@property (copy, nonatomic) NSArray *startEpisodes;
@property (retain, nonatomic) NSValue *tableViewLastContentOffset;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEMixVideoEpisodeSegmentViewDelegate> delegate;
@property (retain, nonatomic) NSNumber *themeStyle;
@property (nonatomic) BOOL autoAdaptScroll;
@property (nonatomic) BOOL isFirstShow;
@property (copy, nonatomic) NSString *referString;

+ (id)getEpisodeSegmentConfigForMixVideoModel:(id)a0;

- (void)updateSelectedWithNewIndex:(id)a0 oldIndex:(id)a1;
- (void)scrollToCenterIndexPath:(id)a0 inCollectionView:(id)a1;
- (unsigned long long)selectSegmentWithEpisode:(id)a0;
- (long long)episodeForSegmentIndex:(long long)a0 currentEpisode:(long long)a1;
- (void)refreshLayoutWithTopOffset:(double)a0 offsetY:(double)a1 inSection:(long long)a2 dataController:(id)a3;
- (void)trackerShowWithModel:(id)a0;
- (void)adaptScrollWithTopOffset:(double)a0 section:(unsigned long long)a1 priority:(unsigned long long)a2 currentAwemeModel:(id)a3 dataController:(id)a4;
- (unsigned long long)currentLayoutPriority;
- (void)resetWithMixVideoModel:(id)a0 inContainer:(id)a1 topOffsetView:(id)a2 priority:(unsigned long long)a3;
- (BOOL)isNeedLoadMoreFromEpisode:(long long)a0 inDataController:(id)a1;
- (void)trackerClickWithModel:(id)a0 sectionOrder:(long long)a1;
- (BOOL)isNeedRequestUpFromEpisode:(long long)a0 inDataController:(id)a1;
- (unsigned long long)visibleIndexFromEpisode:(long long)a0 inDataController:(id)a1;
- (void)refreshLayoutWithTopOffset:(double)a0 priority:(unsigned long long)a1;
- (void)trackerSlideWithModel:(id)a0 slideType:(id)a1;
- (void)adaptScrollWithSection:(unsigned long long)a0 dataController:(id)a1;
- (void)resetSegmentWithMixVideoModel:(id)a0 episodeCount:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })currentRangeOfSegments;
- (void)resetWithMixVideoModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
