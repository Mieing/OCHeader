@class UIView, AWEFeature, AWECompanyAuditInfoResponseModel, UITapGestureRecognizer, NSString, UITextView, DUXSwitch, UILabel;
@protocol AWEEnterpriseCompanyNameEditProtocol;

@interface AWECompanyNameEditViewController : AWEProfileEditTextViewController <UITextViewDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *uploadTipLabel;
@property (retain, nonatomic) UITextView *detailDescriptionTextView;
@property (retain, nonatomic) UITapGestureRecognizer *wholeTapGesture;
@property (retain, nonatomic) AWEFeature<AWEEnterpriseCompanyNameEditProtocol> *companyNameEditFeature;
@property (retain, nonatomic) DUXSwitch *showProofSwitch;
@property (retain, nonatomic) AWECompanyAuditInfoResponseModel *auditInfoModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShouldSaveChange:(BOOL)a0;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (unsigned long long)textEditStyle;
- (void)p_setupCompanyPickImageView;
- (void)checkShouldSaveStatus;
- (void)p_updateText;
- (void)asyncRequsetAuditInfoWithType:(long long)a0 completion:(id /* block */)a1;
- (void)setupBusinessVerifyInfoSaveButton;
- (void)tapSelfView;
- (BOOL)shouldForbidModify;
- (id)defaultTextWithType:(long long)a0;
- (long long)sceneWithType:(long long)a0;
- (unsigned long long)initializeTextEditStyle;
- (void)updateCompanyNickNameTipsIfNeeded;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)keyboardDidShow;
- (void)keyboardDidHide;

@end
