@class NSString, BDPUniqueID, BDPCutLossesInfoModel;

@interface BDPCutLossesViewController : UIViewController <BDPWebViewImplInterface, UINavigationBarDelegate>

@property (retain, nonatomic) BDPCutLossesInfoModel *info;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double showTime;
@property (nonatomic) BOOL didShowInCutLossesNavi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackPageShow;
- (void)webView:(id)a0 invoke:(id)a1 completion:(id /* block */)a2;
- (id)initWithUniqueID:(id)a0 info:(id)a1 type:(unsigned long long)a2;
- (void)registerAPIWithWebView:(id)a0;
- (id)webViewRequest;
- (void)tryToGoHome;
- (void)trackPageStayWithExitType:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
