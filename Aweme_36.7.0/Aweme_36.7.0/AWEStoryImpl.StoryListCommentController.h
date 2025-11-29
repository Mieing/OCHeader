@interface AWEStoryImpl.StoryListCommentController : AWEStoryImpl.StoryListBaseController <NSObject, AWECommentInputViewManagerDelegate, AWEStoryImpl.StoryListControllerViewLifeCycle> {
    void /* unknown type, empty encoding */ selectedCommentIndexPath;
    void /* unknown type, empty encoding */ commentVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentInputViewManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentLongpressManger;
    void /* unknown type, empty encoding */ replyComment;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentTracker;
}

- (BOOL)custom_commentInputViewShouldBeginEditing:(id)a0;
- (BOOL)custom_commentInputViewShouldReturn:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
