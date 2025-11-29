@interface AWEStoryImpl.NavigationBarBackgroundController : AWEStoryImpl.StoryListBaseController <UIScrollViewDelegate, AWEStoryImpl.StoryListControllerViewLifeCycle> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_navBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_opaqueBackgroundView;
    void /* unknown type, empty encoding */ isShowingBackgroundView;
}

- (void)onThemeChanged;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
