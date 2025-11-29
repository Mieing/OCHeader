@class UIView, DVESegmentClipBorderView, NSString, DVEVideoClipRangeSelectViewModel, DVEVideoClipSegmentView, DVEVideoClipCursorView, UIPanGestureRecognizer, UILabel, UIScrollView;
@protocol DVEVideoClipEditDelegate;

@interface DVEVideoClipRangeSelectView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) DVEVideoClipRangeSelectViewModel *viewModel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) DVEVideoClipSegmentView *segmentView;
@property (retain, nonatomic) DVESegmentClipBorderView *rectView;
@property (retain, nonatomic) DVEVideoClipCursorView *cursorView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIView *leftMaskView;
@property (retain, nonatomic) UIView *rightMaskView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (weak, nonatomic) id<DVEVideoClipEditDelegate> editDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateConfig:(id)a0;
- (void)scrollViewDidEndScroll:(id)a0;
- (void)reloadUI;
- (void)updateMaskLayout;
- (void)setupMaskView;
- (void)panGestureRecognizer:(id)a0;
- (void)setupTipLabel;
- (id)initWithSlot:(id)a0 thumbnailManager:(id)a1;
- (void)setupCursorView;
- (void)setupDurationLabel;
- (double)p_offsetOfSegmentViewWithRect;
- (void)trackSelectRangeEvent;
- (void)updateContentOffsetWithTime:(double)a0;
- (void)setSlot:(id)a0 thumbnailManager:(id)a1;
- (void)stopScrolling;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)setupUI;
- (void)updateContentOffset:(double)a0;

@end
