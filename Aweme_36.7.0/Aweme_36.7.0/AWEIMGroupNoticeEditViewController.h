@class AWEIMMessageConversation, AWEIMGroupNoticeEditTemplateView, NSDictionary, UITextView, NSString, UIViewController;

@interface AWEIMGroupNoticeEditViewController : AWETextEditViewController <IESIMGroupNoticeEditViewControllerProtocol>

@property (copy, nonatomic) NSDictionary *routerParams;
@property (weak, nonatomic) UIViewController *groupSettingVC;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMGroupNoticeEditTemplateView *templateView;
@property (nonatomic) BOOL disableCopyingTemplate;
@property (retain, nonatomic) UITextView *contentTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)templateTitle;
- (void)p_finishEditing;
- (void)p_saveButtonClicked;
- (void)setTipLabelForContentTextView;
- (void)saveButtonClicked;
- (void)editTextViewDidChange:(id)a0;
- (void)__clickBlank;
- (void)configStyle;
- (id)pageContentText;
- (long long)maxContentLength;
- (id)pagePreTitle;
- (id)pagePlaceHolder;
- (id)templateLabelText;
- (void)p_onAWEUIThemeChangeNotification;
- (void)updateTemplateViewLayoutWithKeboardShow:(BOOL)a0 userInfo:(id)a1;
- (void)setupPlaceholder;
- (id)copyLabelText;
- (void)copyLabelTapped:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)initWithConversation:(id)a0;
- (void)_setupNavbar;
- (id)pageTitle;

@end
