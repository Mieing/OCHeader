@class AWEIMLiveGroupAnnouncementView, NSString, AWEIMLiveGroupAnnouncementViewModel, UIView, AWEIMHalfScreenContainerViewController;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMLiveGroupAnnouncementViewController : UIViewController <AWERouterViewControllerProtocol, AWEIMInAppPushProtocol>

@property (retain, nonatomic) AWEIMLiveGroupAnnouncementViewModel *viewModel;
@property (retain, nonatomic) AWEIMLiveGroupAnnouncementView *summaryView;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL isAnimating;
@property (readonly, weak, nonatomic) AWEIMHalfScreenContainerViewController *parentVC;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)canShowInnerPush;
- (void)setupBinding;
- (id)initWithConversationId:(id)a0 ext:(id)a1;
- (void)__didTapEditLabel;
- (void)__didTapRightArrow;
- (void)__didTapDescLabel;
- (void)__didTapSelectedIcon;
- (void)__didTapEnableAnnouncementBtn;
- (void)__sendMessage;
- (void)__transferToEditPage;
- (void)__transferToNewEditPage;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)show;
- (void)setupUI;

@end
