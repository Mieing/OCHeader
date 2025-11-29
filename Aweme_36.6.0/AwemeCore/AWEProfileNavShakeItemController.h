@class AWEProfileUrgeControlModel, AWEUserHomeShakeButton, NSString;
@protocol AWEProfileNavigationContainerDelegate;

@interface AWEProfileNavShakeItemController : NSObject <AWEProfilePadEventSubscriber, AWEProfileNavigationItemControllerProtocol>

@property (retain, nonatomic) AWEUserHomeShakeButton *shakeButton;
@property (nonatomic) BOOL hasShakeButtonClicked;
@property (nonatomic) BOOL couldShowUrged;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWEProfileUrgeControlModel *urgeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) long long type;

+ (BOOL)enableShowShakeWithUser:(id)a0 isFromHomepage:(BOOL)a1 isCurrentUser:(BOOL)a2;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)canShow;
- (void)followStatusChange:(id)a0;
- (id)getParams;
- (id)profileContext;
- (void)onReloadUI:(id)a0 isCache:(BOOL)a1;
- (void)enterFullScreenFromSplitScreen;
- (id)padService;
- (void)onWillRefreshWithUser:(id)a0;
- (id)navigationItemView;
- (void)updateShakeHomeWithUser:(id)a0 showEvent:(id)a1;
- (void)trackerShakeButtonShowWithNextUrgeType:(id)a0 type:(id)a1;
- (void)trackUrgeButtonShow;
- (void)handleUrgeAnchorStartLivingIfNeed;
- (void)handleUrgeAnchorRewardDefault;
- (id)getParamsWhenNeedReportLive;
- (void)clickActionWithModel:(id)a0;
- (void)openDonatePanel;
- (void)trackUrgeButtonClick;
- (void)trackFansPushButtonClicked:(id)a0;
- (void)trackFansPushToast:(id)a0;
- (void)updateShakeButton;
- (void)trackUpdateUrgeButtonWithEvent:(id)a0;
- (void)shakeButtonClicked;
- (struct CGSize { double x0; double x1; })itemSize;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end
