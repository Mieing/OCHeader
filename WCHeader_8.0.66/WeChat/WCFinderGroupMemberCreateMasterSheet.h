@class WCFinderContact, NSString, WCFinderHeadImageView, UIView, MMUIButton, RichTextView;

@interface WCFinderGroupMemberCreateMasterSheet : WCFinderCustomPanelSheet <ILinkEventExt, WCFinderCreateUserViewControllerDelegate>

@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMUIButton *aggreCheckBox;
@property (retain, nonatomic) RichTextView *aggrementView;
@property (retain, nonatomic) RichTextView *nickNameLabel;
@property (retain, nonatomic) WCFinderContact *createContact;
@property (copy, nonatomic) NSString *titleDesc;
@property (copy, nonatomic) id /* block */ complectionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)dismiss;
- (id)createAgrementView;
- (id)loadContentView;
- (double)maxHeight;
- (void)viewDidLayoutSubviews;
- (void)onAgreementCheckBoxClick:(id)a0;
- (void)createGroupContact;
- (void)clickEditAction;
- (long long)closeButtonStyle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (void)shakeAggreetView;
- (void)createUserFinished:(id)a0;
- (void).cxx_destruct;

@end
