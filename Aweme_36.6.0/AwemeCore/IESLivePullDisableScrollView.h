@protocol IESLiveScrollViewGestureDelegate;

@interface IESLivePullDisableScrollView : UIScrollView

@property (weak, nonatomic) id<IESLiveScrollViewGestureDelegate> gestureDelegate;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
