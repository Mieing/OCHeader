@protocol AWEIMMultiTabsVCScrollViewDelegate;

@interface AWEIMMultiTabsVCScrollView : UIScrollView

@property (weak, nonatomic) id<AWEIMMultiTabsVCScrollViewDelegate> multiTabsVCScollViewDelegate;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
