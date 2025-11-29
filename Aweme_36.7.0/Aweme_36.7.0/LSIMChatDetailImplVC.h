@class NSString, NSDictionary, UIImage, LSIMChatDetailVC, UIView, LSIMChatDetailFoatingContainerVC;
@protocol LSIMLoadingViewProtocol;

@interface LSIMChatDetailImplVC : UIViewController <LSListVCDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) NSDictionary *routerParams;
@property (nonatomic) long long type;
@property (retain, nonatomic) LSIMChatDetailFoatingContainerVC *floatingContainerVC;
@property (retain, nonatomic) LSIMChatDetailVC *detailVC;
@property (retain, nonatomic) UIView<LSIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL isShowingLoadingView;
@property (retain, nonatomic) UIImage *snapShopImage;
@property (nonatomic) BOOL agreementFailed;
@property (nonatomic) BOOL floatingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)isTopVC;
- (void)p_dismissAndPopViewControllerWithAnimation:(BOOL)a0;
- (void)p_showAgreementIfNeed;
- (void)getSnapShotImageIfNeed;
- (void)setupChatDetailVC;
- (void)setupServiceClient;
- (void)listVC:(id)a0 closePageWithAnimated:(BOOL)a1;
- (void)listVC:(id)a0 pushViewController:(id)a1 animated:(BOOL)a2;
- (void)listVC:(id)a0 presentViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)viewDidLoad;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
