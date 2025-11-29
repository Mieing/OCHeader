@class NSString, UIPanGestureRecognizer;

@interface WAMainFrameTaskBarCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL canHookPanGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *mainFrameCollectionViewPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)doInit;
- (void)initPanGesture;
- (void)handlePan:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)recheckCanHookPanGesture;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
