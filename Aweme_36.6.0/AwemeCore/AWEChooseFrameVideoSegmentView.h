@class UIView, RACDisposable, NSString, DVEVideoThumbnailView, DVEVideoTrackViewModel, DVEVideoSegmentClipInfo, MASConstraint, NLETrackSlot_OC, DVEVideoThumbnailManager;
@protocol AWEChooseFrameCoordinateTransfomer;

@interface AWEChooseFrameVideoSegmentView : UIView <DVEVideoThumbnailLayoutDelegate, DVEVideoThumbnailViewDataSource, DVEVideoThumbnailViewDelegate, DVECoreActionDelegate>

@property (retain, nonatomic) DVEVideoThumbnailManager *thumbnailManager;
@property (nonatomic) double contentInsetsRight;
@property (retain, nonatomic) MASConstraint *contentVisibleViewRightConstraint;
@property (retain, nonatomic) MASConstraint *contentLeftInsetConstraint;
@property (nonatomic) double thumbnailHeight;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL shadeEnable;
@property (retain, nonatomic) RACDisposable *draftEvent;
@property (retain, nonatomic) NLETrackSlot_OC *slot;
@property (weak, nonatomic) id<AWEChooseFrameCoordinateTransfomer> coordinateTransfomer;
@property (retain, nonatomic) UIView *contentVisibleView;
@property (retain, nonatomic) DVEVideoThumbnailView *thumbnailView;
@property (retain, nonatomic) DVEVideoTrackViewModel *viewModel;
@property (retain, nonatomic) DVEVideoSegmentClipInfo *segmentClipTypeInfo;
@property (nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) double thumbnailWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clipForTransition:(id)a0;
- (void)reloadDataWithForce:(BOOL)a0;
- (double)transitionClipHeadOffset;
- (double)transitionClipTailOffset;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })indexesForDisplayedItems:(id)a0;
- (void)reloadAnimationDuration;
- (void)addDraftEvent;
- (void)removeDraftEvent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersectionRectWithScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoThumbnailView:(id)a0 layout:(id)a1 rectForItemAtIndex:(long long)a2;
- (id)videoThumbnailView:(id)a0 cellForItemAtIndex:(long long)a1;
- (long long)numberOfItems:(id)a0;
- (void)videoThumbnailView:(id)a0 didEndDisplayingCell:(id)a1 atIndex:(long long)a2;
- (id)initWithSlot:(id)a0 thumbnailManager:(id)a1 viewModel:(id)a2 transformer:(id)a3 thumbnailHeight:(double)a4;
- (void)updateContentWidth:(double)a0;
- (void)updateContentInsetsRight:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)addObservers;

@end
