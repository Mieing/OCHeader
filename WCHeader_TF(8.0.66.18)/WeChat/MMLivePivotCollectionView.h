@class UIPanGestureRecognizer, MMLivePivotViewController, CADisplayLink;
@protocol MMLivePivotCollectionViewScrollDelegate;

@interface MMLivePivotCollectionView : UICollectionView

@property (retain, nonatomic) CADisplayLink *scrollAnimationLink;
@property (retain, nonatomic) UIPanGestureRecognizer *forbidScrollPanGesture;
@property (nonatomic) BOOL isScrollDown;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (nonatomic) unsigned long long forbidScrollReasons;
@property (weak, nonatomic) id<MMLivePivotCollectionViewScrollDelegate> scrollByDisplayLinkDelegate;
@property (nonatomic) BOOL forbidChangeContentOffset;
@property (nonatomic) BOOL forbidScrollToOtherLiveRoom;
@property (weak, nonatomic) MMLivePivotViewController *controller;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollByDisplayLinkToContentOffsetY:(double)a0;
- (void)scrollAnimationLinkCallback;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setScrollEnabled:(BOOL)a0;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)checkAndSetContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)checkAndSetContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)updateScrollEnablement;
- (void)handlePanGesture:(id)a0;
- (void)setForbidScroll:(BOOL)a0 forReason:(unsigned long long)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
