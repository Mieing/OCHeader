@class AWEFeature, UITextView, NSString, AWECompanyAuditInfoResponseModel, UIView, UIImage, UIButton;
@protocol AWEEnterpriseCompanyNameEditProtocol;

@interface AWECompanyAvatarSupplementViewController : UIViewController <UITextViewDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *topAlertView;
@property (retain, nonatomic) UIButton *skipButton;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) AWEFeature<AWEEnterpriseCompanyNameEditProtocol> *pictureSupplementFeature;
@property (retain, nonatomic) UITextView *detailDescriptionTextView;
@property (retain, nonatomic) AWECompanyAuditInfoResponseModel *signatureModel;
@property (copy, nonatomic) id /* block */ avatarSubmitBlock;
@property (retain, nonatomic) UIImage *avaterImage;
@property (nonatomic) BOOL needPublishToDaily;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapBack;
- (void)setTextOnTextView:(id)a0;
- (void)asyncRequsetAuditInfoWithCompletion:(id /* block */)a0;
- (void)p_setupCompanyPickImageView;
- (void)p_setUpNaviBar;
- (void)tapSkipButton;
- (void)tapSubmitButton;
- (void)avatarSubmit;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
