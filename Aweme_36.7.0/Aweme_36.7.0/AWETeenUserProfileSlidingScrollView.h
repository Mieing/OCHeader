@protocol AWETeenUserProfileSlidingScrollViewDelegate;

@interface AWETeenUserProfileSlidingScrollView : AWESlidingScrollView

@property (weak, nonatomic) id<AWETeenUserProfileSlidingScrollViewDelegate> userProfileDelegate;

- (BOOL)shouldPan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
