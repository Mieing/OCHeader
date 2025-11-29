@protocol BDRScrollViewDelegate;

@interface BDRScrollView : UIScrollView

@property (weak, nonatomic) id<BDRScrollViewDelegate> delegate;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
