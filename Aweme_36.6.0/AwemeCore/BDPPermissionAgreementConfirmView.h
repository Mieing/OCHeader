@class BDPCloseButton, NSString, NSDictionary, BDPButton, BDPAboutPrivacyRegulationContentView;
@protocol BDPPrivacyRegulationViewDelegate;

@interface BDPPermissionAgreementConfirmView : UIView <BDPPrivacyRegulationContentViewDelegate, UITextViewDelegate>

@property (nonatomic) BOOL fromPolicies;
@property (nonatomic) BOOL hasSetupDelegate;
@property (nonatomic) double targetHeight;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *policies;
@property (weak, nonatomic) BDPCloseButton *closeBtn;
@property (weak, nonatomic) BDPButton *confirmBtn;
@property (weak, nonatomic) BDPAboutPrivacyRegulationContentView *regulationContentView;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ constractLinkBlock;
@property (weak, nonatomic) id<BDPPrivacyRegulationViewDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCloseButtonClicked;
- (void)onConfirmButtonClicked;
- (void)onClickReport:(id)a0;
- (void)onClickPersonalizedProtocol:(id)a0;
- (void)onClickPrivacyProtocol:(id)a0;
- (id)initPrivacyConstractWithName:(id)a0;
- (id)initWithName:(id)a0 policies:(id)a1;
- (void)setUpNewPrivacyContractUI;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)layoutSubviews;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setupUI;

@end
