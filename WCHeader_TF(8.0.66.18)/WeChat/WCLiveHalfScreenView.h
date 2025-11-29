@class MMUILabel, NSString, UIColor, RichTextView, UIButton;

@interface WCLiveHalfScreenView : MMUIHalfScreenViewController <MMUIHalfScreenViewControllerDelegate>

@property (nonatomic) BOOL isShown;
@property (retain, nonatomic) MMUILabel *infoTitle;
@property (retain, nonatomic) RichTextView *infoDesc;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) NSString *desc;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (retain, nonatomic) NSString *confirmButtonLabel;
@property (retain, nonatomic) NSString *cancelButtonLabel;
@property (nonatomic) BOOL hasCancelButton;
@property (nonatomic) BOOL isShorterHalfVC;
@property (retain, nonatomic) UIColor *singleConfirmButtonBgColor;
@property (retain, nonatomic) UIColor *singleConfirmButtonFgColor;
@property (retain, nonatomic) UIColor *confirmButtonBgColor;
@property (retain, nonatomic) UIColor *confirmButtonFgColor;
@property (retain, nonatomic) UIColor *cancelButtonBgColor;
@property (retain, nonatomic) UIColor *cancelButtonFgColor;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *descColor;
@property (nonatomic) double descTextSize;
@property (nonatomic) long long titleAlignment;
@property (nonatomic) long long descAlignment;
@property (nonatomic) double buttonBottomMargin;
@property (nonatomic) double configHalfScreenHeight;
@property (nonatomic) double titleTopMargin;
@property (nonatomic) double titleDescGap;
@property (nonatomic) double viewLeftRightMargin;
@property (nonatomic) BOOL useBoldTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 andDesc:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupUI;
- (void)layoutUI;
- (void)layoutLiveConfirmButton;
- (void)updateConfirmButtonLayout;
- (void)layoutConfrimAndCancelButtons;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (void)onArrowButtonClicked;
- (void)popOrDismissSelf;
- (void)popOrDismissSelfWithCompletion:(id /* block */)a0;
- (void)notifySelfPopedOrDismissed;
- (void).cxx_destruct;

@end
