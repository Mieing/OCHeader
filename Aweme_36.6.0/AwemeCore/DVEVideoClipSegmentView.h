@class DVEVideoClipSegmentViewModel, NSString, DVEVideoThumbnailView, UIView, DVEVideoClipTimelineCalculator, MASConstraint;

@interface DVEVideoClipSegmentView : UIView <DVEVideoThumbnailLayoutDelegate, DVEVideoThumbnailViewDataSource, DVEVideoThumbnailViewDelegate>

@property (retain, nonatomic) MASConstraint *contentLeftOffsetConstraint;
@property (retain, nonatomic) DVEVideoClipTimelineCalculator *timelineCalculator;
@property (retain, nonatomic) DVEVideoThumbnailView *contentView;
@property (retain, nonatomic) UIView *contentVisibleView;
@property (nonatomic) double thumbnailWidth;
@property (nonatomic) double thumbnailHeight;
@property (retain, nonatomic) DVEVideoClipSegmentViewModel *viewModel;
@property (nonatomic) double contentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })indexesForDisplayedItems:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersectionRectWithScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoThumbnailView:(id)a0 layout:(id)a1 rectForItemAtIndex:(long long)a2;
- (id)videoThumbnailView:(id)a0 cellForItemAtIndex:(long long)a1;
- (long long)numberOfItems:(id)a0;
- (void)videoThumbnailView:(id)a0 didEndDisplayingCell:(id)a1 atIndex:(long long)a2;
- (id)initWithSlot:(id)a0 thumbnailManager:(id)a1;
- (void)setupUIWithContentWidth:(double)a0;
- (void)reloadDataForce:(BOOL)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;

@end
