@class NSString, UIImageView, UILabel, ContactsImportLogic, UIButton;

@interface ContactsImportGuideViewController : MMUIViewController <ContactsImportLogicDelegate>

@property (retain, nonatomic) ContactsImportLogic *contactsImportLogic;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQRCode:(id)a0;
- (void)viewDidLoad;
- (void)initView;
- (id)navigationBarBackgroundColor;
- (void)layoutControllerView;
- (void)onTapCloseNavigationItem;
- (void)onTapButton;
- (void)onBindOldWechatAccountSucceeded:(id)a0;
- (void)onBindOldWechatAccountFailed:(id)a0 errorMessage:(id)a1 canRecover:(BOOL)a2;
- (void).cxx_destruct;

@end
