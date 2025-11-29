@class UITapGestureRecognizer, NSMutableArray, NSString;
@protocol MJTimelineViewDelegate;

@interface MJTimelineView : UICollectionView <MJTimelineVisibleRectDataSource>

@property (nonatomic) BOOL isBatchUpdating;
@property (nonatomic) BOOL hasQueuedUpdates;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastLayoutBounds;
@property (nonatomic) struct CGSize { double width; double height; } lastLayoutContentSize;
@property (weak, nonatomic) id<MJTimelineViewDelegate> layoutDelegate;
@property (readonly, nonatomic) UITapGestureRecognizer *backgroundTapGR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)dealloc;
- (void)commonInit;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })timelineViewVisibleRect;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)performBatchUpdateWithMutationInfo:(id)a0;
- (void)updateWithMutationInfo:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isValidMutationInfo:(id)a0;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
