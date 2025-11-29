@class AWESkyLightCaptureView, NSString, AWESkyLightContainerViewModel, AWEUILoadingView, UIView, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol;

@interface AWESkyLightContainerViewController : UIViewController <AWEPadFeedTabSplitScreenProtocol, AWEHPContentVCChannelConfigProtocol, AWEFeedTabItemViewControllerProtocol>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWESkyLightContainerViewModel *viewModel;
@property (retain, nonatomic) UIViewController *topBarView;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentView;
@property (retain, nonatomic) AWESkyLightCaptureView *captureView;
@property (retain, nonatomic) UIView *capsuleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *referString;

+ (Class)aAWEPadSplitScreenAdapterClass;

- (void)pauseWithAnimation;
- (id)currentAweme;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)onAwemeDeleted:(id)a0 isDislike:(BOOL)a1;
- (id)currentVideoController;
- (void)setChannelConfig:(id)a0;
- (id)aAWEPadSplitScreenAdapter;
- (id)padSplitScreenFeedTableViewController;
- (void)setCapsuleViewHidden:(BOOL)a0;
- (void)setupEvent;
- (void)showLoading:(BOOL)a0;
- (id)initWithSkyLightTopBarViewModel:(id)a0 contentViewModel:(id)a1;
- (void)initRefresh;
- (void)buildSkyLightContainerView;
- (void)updateSkyLightViewStatus:(BOOL)a0;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)viewDidLayoutSubviews;
- (void)reload;
- (void)stop;
- (void)viewDidLoad;
- (id)currentInteractionController;

@end
