@class UIStackView, UIView, UITapGestureRecognizer, NSString, UIImageView, UIButton, AWELiveStreamLocalInstantModel, AWELivePreStreamLiveDistributeFooterView, UILabel;

@interface AWELiveStreamEcomInstantImageStyleElement : AWELiveBaseElement <AWELivePreStreamAlertPriorityProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UILabel *relatedSearchTitle;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIStackView *centerStackView;
@property (retain, nonatomic) AWELivePreStreamLiveDistributeFooterView *continueLookVideo;
@property (retain, nonatomic) UITapGestureRecognizer *tapCardTopEnterRoom;
@property (nonatomic) long long rowMaxNum;
@property (retain, nonatomic) AWELiveStreamLocalInstantModel *searchModel;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL hasHiddenAllElement;
@property (nonatomic) BOOL hasEnterRoom;
@property (nonatomic) BOOL hasScrollInnerFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidDisAppear;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)application_DidEnterBackground;
- (void)viewDidDisposed;
- (void)removeLiveAlertElementWithCompletion:(id /* block */)a0;
- (void)showLiveAlertElementWithCompletion:(id /* block */)a0;
- (unsigned long long)elementConfig;
- (void)viewController_willBeginDragging:(id)a0;
- (void)audienceViewController_WillEnterLiveRoom:(id)a0 anchorID:(id)a1;
- (void)p_hide:(BOOL)a0;
- (id)preStreamView;
- (BOOL)supportShow;
- (BOOL)checkShouldShowEcomInstantImageStyleElement;
- (void)tapCloseButton;
- (void)tapCardTopEnterRoom:(id)a0;
- (id)elementView;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;
- (id)createItemView;

@end
