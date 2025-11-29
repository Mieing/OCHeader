@class NSString;

@interface AWEUploadContactAlertViewController : UIViewController <AWEDigitalWellbeingMessage, DUXSheetDelegate, AWERouterViewControllerProtocol, AWEAlertProtocol>

@property (class, copy, nonatomic) id /* block */ completionBlock;

@property (nonatomic) BOOL needAddressListAuthorization;
@property (nonatomic) BOOL needUploadAddressList;
@property (nonatomic) BOOL uploadContactsSilently;
@property (nonatomic) BOOL needCallCompletionBlock;
@property (nonatomic) BOOL enterFromAddressBookManager;
@property (nonatomic) BOOL isEnterFromMain;
@property (nonatomic) BOOL isTriggered;
@property (copy, nonatomic) NSString *triggerScene;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long blockType;
@property (copy, nonatomic) id /* block */ clickActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)showAlertViewWithParams:(id)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetDidDismiss:(id)a0;
- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (id)initWithRouterParamDict:(id)a0;
- (void)initBlockType;
- (id)p_enterFromString;
- (void)dismissAction:(id /* block */)a0;
- (void)uploadAddressBook:(id /* block */)a0;
- (void)finishCompletionBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
