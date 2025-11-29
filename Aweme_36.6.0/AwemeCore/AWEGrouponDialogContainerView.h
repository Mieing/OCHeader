@class UIView, NSString, AWEGrouponResourceOfBottomBannerModel, AWEGrouponDialogContainerUIConfig, UIButton, AWEGrouponResourceOfCommonData, NSMutableArray, AWEGrouponResourceOfPopupModel;
@protocol BDXContainerProtocol, BDXViewContainerProtocol;

@interface AWEGrouponDialogContainerView : UIView <BDXContainerLifecycleProtocol>

@property (copy, nonatomic) id /* block */ refreshBlk;
@property (retain, nonatomic) AWEGrouponResourceOfPopupModel *popupModel;
@property (retain, nonatomic) AWEGrouponResourceOfBottomBannerModel *bottomBannerModel;
@property (retain, nonatomic) AWEGrouponResourceOfCommonData *commonData;
@property (copy, nonatomic) NSString *openSessionID;
@property (retain, nonatomic) AWEGrouponDialogContainerUIConfig *uiConfig;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *contentURL;
@property (retain, nonatomic) id containerModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (retain, nonatomic) UIButton *maskViewButton;
@property (nonatomic) BOOL needInterceptAction;
@property (nonatomic) double startTime;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSString *dialogStyle;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol, BDXContainerProtocol> *lynxView;
@property (copy, nonatomic) id /* block */ showSuccessBlk;
@property (copy, nonatomic) id /* block */ closeBlk;
@property (nonatomic) BOOL dialogContainerViewDidMount;
@property (copy, nonatomic) NSString *ticketID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerModel:(id)a1 showSuccessBlk:(id /* block */)a2 refreshBlk:(id /* block */)a3 closeBlk:(id /* block */)a4;
- (void)updateContainerModel:(id)a0 showSuccessBlk:(id /* block */)a1 refreshBlk:(id /* block */)a2 closeBlk:(id /* block */)a3;
- (void)sendOuterDrawCouponResult:(BOOL)a0 ticketId:(id)a1;
- (void)enterNearbyLifeTab;
- (void)leaveNearbyLifeTab;
- (void)updateBottomBarStatus:(BOOL)a0;
- (id)getBannerExclusiveCard;
- (void)setupContainerModel:(id)a0;
- (void)unRegisterDialogContainerJSEvent;
- (void)setupContentViewUI;
- (void)updateLynxViewContainer;
- (void)couponBarRefreshWithStatus:(BOOL)a0;
- (void)setupContainerContent:(id)a0;
- (double)getContentViewWidth;
- (double)getContentViewHeight;
- (void)transformUIConfig:(id)a0;
- (void)registerDialogContainerJSEvent;
- (id)lynxViewAddExtraParams:(id)a0;
- (void)trackCommonDialogLoadWithLoadType:(id)a0;
- (void)closeDialogContainer;
- (BOOL)shouldPopAvoidColdLaunch;
- (void)requestSyncDialogContainerWithAction:(id)a0 style:(id)a1;
- (void)showContentViewWithStyle:(id)a0;
- (void)updateContainerUI:(id)a0;
- (void)refreshC2ContainerFeedWithAction:(unsigned long long)a0 useFeedPartialUpdate:(BOOL)a1 resourceType:(id)a2 extraRequestParam:(id)a3;
- (long long)handleCouponTicketID:(id)a0;
- (void)maskViewButtonClicked:(id)a0;
- (void)switchDialogContainerStyle;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;
- (void)setupUI;

@end
