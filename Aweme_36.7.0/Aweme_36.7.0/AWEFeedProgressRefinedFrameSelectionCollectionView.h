@class NSString, UIPinchGestureRecognizer, UIPanGestureRecognizer, UILongPressGestureRecognizer;

@interface AWEFeedProgressRefinedFrameSelectionCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIPanGestureRecognizer *frameSelectionCollectionPanGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *frameSelectionCollectionLongPressGesture;
@property (retain, nonatomic) UIPinchGestureRecognizer *frameSelectionCollectionPinchGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)frameSelectionPanPressHandle;
- (void)frameSelectionLongPressHandle;
- (void)frameSelectionPinchHandle;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;

@end
