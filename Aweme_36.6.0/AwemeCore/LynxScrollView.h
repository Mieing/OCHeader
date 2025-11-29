@class NSString, LynxUIScroller, LynxGestureConsumer, UIPanGestureRecognizer;

@interface LynxScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL forceCanScroll;
@property (retain, nonatomic) Class blockGestureClass;
@property (nonatomic) long long recognizedViewTag;
@property (weak, nonatomic) LynxUIScroller *weakUIScroller;
@property (nonatomic) BOOL duringGestureScroll;
@property (nonatomic) BOOL gestureEnabled;
@property (nonatomic) BOOL increaseFrequencyWithGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *nativeGesturePanRecognizer;
@property (retain, nonatomic) LynxGestureConsumer *gestureConsumer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupNativeGestureRecognizerIfNeeded:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateContentSize;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)dealloc;
- (void)handlePanGesture:(id)a0;

@end
