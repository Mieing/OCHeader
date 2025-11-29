@class MMUIButton, UIButton, NSString, UIView, RichTextView, MMUILabel;
@protocol WCFinderLiveHalfScreenUtilControllerDelegate;

@interface WCFinderLiveHalfScreenUtilController : MMUIHalfScreenViewController <ILinkEventExt, MMUIHalfScreenViewControllerDelegate>

@property (retain, nonatomic) MMUIButton *arrowButton;
@property (retain, nonatomic) MMUILabel *infoTitle;
@property (retain, nonatomic) RichTextView *infoDesc;
@property (retain, nonatomic) UIView *checkBoxView;
@property (retain, nonatomic) MMUIButton *agreementCheckbox;
@property (retain, nonatomic) RichTextView *agreementText;
@property (retain, nonatomic) UIButton *confirmButton;
@property (nonatomic) long long entryScene;
@property (retain, nonatomic) NSString *cliMsgId;
@property (nonatomic) BOOL isShown;
@property (nonatomic) BOOL isAgreementChecked;
@property (nonatomic) BOOL isPolicy;
@property (weak, nonatomic) id<WCFinderLiveHalfScreenUtilControllerDelegate> verifyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEntryScene:(long long)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupUI;
- (void)layoutUI;
- (void)layoutCheckBoxView;
- (void)addShakeOnCheckBoxView;
- (void)updateAccessbility;
- (void)onCheckBoxClicked;
- (void)onConfirmButtonClicked;
- (void)onArrowButtonClicked;
- (void)popOrDismissSelf;
- (void)popOrDismissSelfWithCompletion:(id /* block */)a0;
- (void)notifySelfPopedOrDismissed;
- (BOOL)shouldAgreementCheckBoxShown;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
