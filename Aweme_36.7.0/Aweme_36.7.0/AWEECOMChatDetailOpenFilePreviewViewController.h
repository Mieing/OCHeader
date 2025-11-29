@class NSDictionary, BDECPigeonDownloadFileCustomerViewController, NSString;

@interface AWEECOMChatDetailOpenFilePreviewViewController : AWEECOMIMBaseViewController <AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSDictionary *routerParamDict;
@property (retain, nonatomic) BDECPigeonDownloadFileCustomerViewController *filePreviewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
