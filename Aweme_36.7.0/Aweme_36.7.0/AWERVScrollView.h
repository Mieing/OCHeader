@protocol AWERVScrollViewProtocol;

@interface AWERVScrollView : UIScrollView

@property (weak, nonatomic) id<AWERVScrollViewProtocol> simultaneouslyDelegate;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
