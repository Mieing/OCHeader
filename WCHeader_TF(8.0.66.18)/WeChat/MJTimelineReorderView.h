@class UILongPressGestureRecognizer, NSArray, UICollectionViewFlowLayout, NSString, OMCBatchThumbnailProvider, UICollectionView, MJPlaybackViewModel, MJTimelineViewModel, UILabel;
@protocol MJTimelineReorderViewDelegate;

@interface MJTimelineReorderView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, MJSegmentReusableViewDelegate>

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGR;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *initialOrder;
@property (retain, nonatomic) OMCBatchThumbnailProvider *batchThumbnailProvider;
@property (weak, nonatomic) id<MJTimelineReorderViewDelegate> delegate;
@property (readonly, nonatomic) MJTimelineViewModel *timelineVM;
@property (readonly, nonatomic) MJPlaybackViewModel *playbackVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTimelineViewModel:(id)a0 playbackViewModel:(id)a1;
- (void)dealloc;
- (void)setupThumbnailProvider;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)setupGestures;
- (BOOL)hasChanges;
- (void)handleLongPressGesture:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 moveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)updateVisibleCellNumbers;
- (void)handleSelectSegmentAtIndexPath:(id)a0;
- (void).cxx_destruct;

@end
