@class UIView;
@protocol AWEPublishProgressViewProtocol;

@interface AWEStoryImpl.StoryFeedPublishProgressController : AWEStoryKit.StoryKitBaseController <AWEPublishProgressContainerInfoProtocol, AWEStoryKit.StoryKitViewControllerLifeCycle> {
    void /* unknown type, empty encoding */ publishProgressManager;
}

@property (nonatomic, readonly) long long publishProgressContainerType;
@property (nonatomic, readonly) UIView *publishProgressContainerView;
@property (nonatomic, retain) UIView<AWEPublishProgressViewProtocol> *progressView;

- (void)publishProgressViewDidBeginPublish;
- (void)publishProgressViewDidEndPublish;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;

@end
