@class NSString, AWEPublishProgressView, UIView, AWEStudioPublishProgressViewController;

@interface AWEFeedPublishProgressViewController : AWEBaseController <AWEPublishProgressContainerInfoProtocol, AWEFeedControllerProtocol>

@property (retain, nonatomic) AWEPublishProgressView *progressView;
@property (nonatomic) BOOL shouldShowUploadView;
@property (retain, nonatomic) AWEStudioPublishProgressViewController *publishProgressController;
@property (readonly, nonatomic) long long publishProgressContainerType;
@property (readonly, nonatomic) UIView *publishProgressContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioDOUYINSSAdapterClass;
+ (Class)aAWEStudioPublishAwemeAdapterClass;

- (id)referString;
- (id)feedTableViewByBiz:(long long)a0;
- (void)publishProgressViewDidBeginPublish;
- (void)publishProgressViewDidEndPublish;
- (void)addProgressView;
- (id)followContainerVC;
- (id)aAWEStudioDOUYINSSAdapter;
- (id)aAWEStudioPublishAwemeAdapter;
- (void)createUnifiedPublishProgressViewControllerIfNeeded;
- (BOOL)enableUnifiedPublishProgress;
- (BOOL)shouldShowUploadViewForQuickSharePublish;
- (void)setupProgressViewIfNeeded;
- (BOOL)shouldAddShowProgressViewWithTask:(id)a0;
- (BOOL)isExistTaskOnTab;
- (BOOL)shouldShowUploadViewForNon24StoryLandingToHotWithTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear;

@end
