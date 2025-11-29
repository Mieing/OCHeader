@class NSString, UIView, AWEAuthorizeStateManager, AWEVCDAccountAlertModel;
@protocol AWEAuthorizeAlertViewProtocol;

@interface AWEAuthorizeAlertViewController : UIViewController <AWEAuthorizeViewDelegate>

@property (retain, nonatomic) UIView<AWEAuthorizeAlertViewProtocol> *alertView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ liveCompletionBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (retain, nonatomic) AWEVCDAccountAlertModel *model;
@property (retain, nonatomic) AWEAuthorizeStateManager *authorizeStateManager;
@property (nonatomic) BOOL isLive;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long accountStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)agreeAction;
- (BOOL)needCloseInterConnect;
- (id)bindPhoneIfNeeded;
- (id)closeInterConnect;
- (void)processSuccess;
- (id)agreeAuthorize;
- (void)monitorAccountAuthorize:(long long)a0 error:(id)a1 extraInfo:(id)a2;
- (void)nextTimeAction;
- (id)initWithAccountModel:(id)a0 didShowBlock:(id /* block */)a1 complete:(id /* block */)a2;
- (id)initWithAccountModel:(id)a0 didShowBlock:(id /* block */)a1 liveComplete:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
