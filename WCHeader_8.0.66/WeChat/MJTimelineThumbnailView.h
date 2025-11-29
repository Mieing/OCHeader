@class NSString, MJTimelineViewModel, UICollectionView, MMUIView, UICollectionViewFlowLayout, UILabel, MJPlaybackViewModel;
@protocol OMCThumbnailProvider, MJTimelineThumbnailViewDelegate;

@interface MJTimelineThumbnailView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, MJSegmentReusableViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentBounds;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) id<OMCThumbnailProvider> thumbnailProvider;
@property (retain, nonatomic) MMUIView *playheadView;
@property (readonly, nonatomic) MJTimelineViewModel *timelineVM;
@property (readonly, nonatomic) MJPlaybackViewModel *playbackVM;
@property (weak, nonatomic) id<MJTimelineThumbnailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTimelineViewModel:(id)a0 playbackViewModel:(id)a1;
- (void)dealloc;
- (void)setupViews;
- (void)layoutViews;
- (void)layoutSubviews;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (long long)numberOfThumbnailTiles;
- (void)setupThumbnailCell:(id)a0 atIndexPath:(id)a1;
- (void)requestThumbnailImageForCell:(id)a0 atIndexPath:(id)a1;
- (void)cancelThumbnailImageRequestForCell:(id)a0 atIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)didEndScrubbingTimelineView;
- (void)scrollToContentRange;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })playbackTimeFromPlayheadOffset;
- (void)skimAndNotify;
- (void)didFinish;
- (void)didCancel;
- (void)stopScrollIfNeeded;
- (void)syncTimelinePlayheadTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeForOffset:(double)a0 shouldClamp:(BOOL)a1 contentRangeClamp:(BOOL)a2;
- (double)offsetForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForOffsetRange:(struct MCOffsetRange { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
