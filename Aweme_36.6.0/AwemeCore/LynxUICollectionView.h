@class NSString, LynxListScrollEventEmitter;

@interface LynxUICollectionView : UICollectionView

@property (weak, nonatomic) LynxListScrollEventEmitter *scrollEventEmitter;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL disableAnimationDuringLayout;
@property (nonatomic) BOOL duringGestureScroll;
@property (nonatomic) BOOL gestureEnabled;
@property (nonatomic) BOOL increaseFrequencyWithGesture;
@property (nonatomic, getter=isLynxListAdjustingContentOffset, setter=setLynxListAdjustingContentOffset:) BOOL adjustingContentOffsetInternally;
@property (nonatomic) long long bounceForbiddenDirection;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)layoutSubviews;

@end
