@interface AWEStoryImpl.StoryListCommentCellModel : AWEStoryImpl.StoryListPostCellModel <AWEStoryImpl.StoryListControllerViewLifeCycle, AWEUserMessage> {
    void /* unknown type, empty encoding */ comment;
    void /* unknown type, empty encoding */ visible;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ width;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_config;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentGenerator;
}

- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
