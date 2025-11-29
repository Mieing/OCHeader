@interface AWEStoryImpl.Story25FeedNavigationController : AWEStoryKit.StoryKitBaseController <AWEPlayInteractionShareActionLifeCycleDelegate, AWEStoryKit.StoryKitViewControllerLifeCycle> {
    void /* unknown type, empty encoding */ currentItemID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cameraBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareBtn;
    void /* unknown type, empty encoding */ shareViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_indexUpdateController;
}

- (void)tapCloseBtn;
- (void)tapCameraBtn;
- (void)tapShareBtn;
- (void)didUpdateShareActionStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
