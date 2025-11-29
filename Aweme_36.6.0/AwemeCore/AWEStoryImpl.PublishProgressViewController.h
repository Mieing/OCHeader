@class UIView;
@protocol AWEPublishProgressViewProtocol;

@interface AWEStoryImpl.PublishProgressViewController : AWEStoryImpl.StoryListBaseController <AWEStoryImpl.StoryListControllerViewLifeCycle, AWEPublishProgressContainerInfoProtocol> {
    void /* unknown type, empty encoding */ publishProgressManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_storyContext;
}

@property (nonatomic, retain) UIView<AWEPublishProgressViewProtocol> *progressView;
@property (nonatomic, readonly) long long publishProgressContainerType;
@property (nonatomic, readonly) UIView *publishProgressContainerView;

- (id)referString;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;

@end
