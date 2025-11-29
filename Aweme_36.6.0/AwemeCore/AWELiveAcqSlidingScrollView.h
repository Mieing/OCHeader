@protocol AWELiveAcqSlidingScrollViewDelegate;

@interface AWELiveAcqSlidingScrollView : AWESlidingScrollView

@property (weak, nonatomic) id<AWELiveAcqSlidingScrollViewDelegate> userProfileDelegate;

- (BOOL)shouldPan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
