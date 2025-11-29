@class NSString, NSDictionary, LSIMChatListVC, UIView;
@protocol LSIMLoadingViewProtocol;

@interface LSIMChatListImplVC : UIViewController <AWERouterViewControllerProtocol, LSListVCDelegate>

@property (retain, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) LSIMChatListVC *listVC;
@property (retain, nonatomic) UIView<LSIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL agreementFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)p_backBtnClicked;
- (void)setupServiceClient;
- (void)listVC:(id)a0 closePageWithAnimated:(BOOL)a1;
- (void)p_reuqestAgreement;
- (void)setupChatListVC;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
