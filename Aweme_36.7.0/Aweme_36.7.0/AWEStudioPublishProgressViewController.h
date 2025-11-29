@class NSString, AWEPublishProgressView;
@protocol AWEPublishProgressContainerInfoProtocol;

@interface AWEStudioPublishProgressViewController : NSObject <AWEStudioPublishProgressViewControllerProtocol>

@property (retain, nonatomic) AWEPublishProgressView *progressView;
@property (nonatomic) BOOL shouldShowUploadView;
@property (weak, nonatomic) id<AWEPublishProgressContainerInfoProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioDOUYINSSAdapterClass;
+ (Class)aAWEStudioPublishAwemeAdapterClass;

- (void)onViewDidLoad;
- (void)onViewWillAppear;
- (void)onViewWillLayoutSubviews;
- (void)onViewDidDisappear;
- (void)addProgressView;
- (id)aAWEStudioDOUYINSSAdapter;
- (id)aAWEStudioPublishAwemeAdapter;
- (BOOL)shouldShowUploadViewForQuickSharePublish;
- (void)setupProgressViewIfNeeded;
- (BOOL)shouldAddShowProgressViewWithTask:(id)a0;
- (BOOL)isExistTaskOnTab;
- (BOOL)shouldShowUploadViewForNon24StoryLandingToHotWithTask:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
