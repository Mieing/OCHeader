@class AWEIMConversationContext, UIScrollView;
@protocol AWEIMScrollViewContentOffsetManagerDataSource, AWEIMScrollViewContentOffsetManagerDelegate;

@interface AWEIMScrollViewContentOffsetManager : NSObject

@property (nonatomic) long long lastLatestMsgGlobalIndex;
@property (nonatomic) struct CGPoint { double x; double y; } destinationContentOffset;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (nonatomic) BOOL shouldAutomaticallyScrollToBottom;
@property (nonatomic) BOOL isNeedScroll;
@property (nonatomic) BOOL scrollViewIsScrolling;
@property (nonatomic) BOOL scrollViewIsDragging;
@property (nonatomic) BOOL scrollViewIsAtBottom;
@property (nonatomic) BOOL menuIsShowing;
@property (nonatomic) BOOL isAtTargetMessagePosition;
@property (nonatomic) BOOL newMessageTipsIsShowing;
@property (nonatomic) BOOL isEditingMessage;
@property (nonatomic) BOOL isLoadingMore;
@property (weak, nonatomic) id<AWEIMScrollViewContentOffsetManagerDataSource> dataSource;
@property (weak, nonatomic) id<AWEIMScrollViewContentOffsetManagerDelegate> delegate;
@property (weak, nonatomic) UIScrollView *managedScrollView;
@property (nonatomic) BOOL isFirstLoading;

- (id)initWithConversationContext:(id)a0;
- (void)scrollViewDidEndScroll:(id)a0;
- (BOOL)isScrollViewAtBottom:(id)a0;
- (BOOL)isScrollViewAtBottom:(id)a0 withContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (double)excessContentHeightForContentSize:(struct CGSize { double x0; double x1; })a0 contentOffset:(struct CGPoint { double x0; double x1; })a1 frameHeight:(double)a2;
- (double)autoScrollToBottomThreshold;
- (void)inputViewController:(id)a0 inputViewTypeDidChange:(long long)a1;
- (void)scrollViewForContinueLoadMore:(id)a0 oldContentSize:(struct CGSize { double x0; double x1; })a1 oldContentOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)scrollView:(id)a0 didChangeContentSize:(struct CGSize { double x0; double x1; })a1 newSize:(struct CGSize { double x0; double x1; })a2;
- (void)scrollView:(id)a0 didSetContentOffset:(struct CGPoint { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)scrollView:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 newFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)enqueueSetContentOffsetUITask:(id)a0 targetOffsetY:(double)a1;
- (BOOL)shouldScrollToBottomViaCoreAnimation;
- (void)scrollToButtomViaUITaskWithScrollView:(id)a0;
- (void)scrollToBottomViaCoreAnimationWithScrollView:(id)a0 completion:(id /* block */)a1;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)commonInit;
- (void)scrollViewDidScroll:(id)a0;

@end
