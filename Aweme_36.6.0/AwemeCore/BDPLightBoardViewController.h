@class NSString, BDPModel, WKWebView, BDPUniqueID, UIViewController;
@protocol BDPHostWebViewProtocol, BDPBaseVCProtocol, BDPlatformContainerProtocol;

@interface BDPLightBoardViewController : UIViewController <BDPHostWebViewDelegate>

@property (nonatomic) unsigned long long loadResultType;
@property (nonatomic) unsigned long long errorCode;
@property (weak, nonatomic) WKWebView<BDPHostWebViewProtocol> *webView;
@property (weak, nonatomic) UIViewController<BDPlatformContainerProtocol, BDPBaseVCProtocol> *baseVC;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *urlStr;
@property (copy, nonatomic) BDPModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseVC:(id)a0 uniqueID:(id)a1 errorCode:(unsigned long long)a2;
- (id)initWithBaseVC:(id)a0 uniqueID:(id)a1 loadResultType:(unsigned long long)a2;
- (id)getUrlStrWithResultType:(unsigned long long)a0;
- (id)getUrlStrWithErrorCode:(unsigned long long)a0;
- (void)injectOfflineAPIIfNeed;
- (void).cxx_destruct;
- (void)closeContainer;
- (void)viewDidLoad;
- (void)loadView;

@end
