@protocol IESECMallSlidingScrollViewDelegate;

@interface IESECMallSlidingScrollView : UIScrollView

@property (weak, nonatomic) id<IESECMallSlidingScrollViewDelegate> slidingDelegate;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (long long)currentPageIndex;

@end
