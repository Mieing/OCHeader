@protocol IESIMChatDetailSlidingScrollViewDelegate;

@interface AWENewChatDetailSlidingScrollView : AWESlidingScrollView

@property (weak, nonatomic) id<IESIMChatDetailSlidingScrollViewDelegate> chatDetailDelegate;

- (BOOL)shouldPan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
