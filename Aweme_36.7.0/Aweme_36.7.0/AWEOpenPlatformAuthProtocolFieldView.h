@class AWEOpenPlatformAuthFlowManager, NSString, TTTAttributedLabel, DUXCheckBox;

@interface AWEOpenPlatformAuthProtocolFieldView : UIView <TTTAttributedLabelDelegate>

@property (retain, nonatomic) AWEOpenPlatformAuthFlowManager *flowManager;
@property (retain, nonatomic) TTTAttributedLabel *agreementAndPolicyLabel;
@property (retain, nonatomic) DUXCheckBox *protocolCheckBox;
@property (nonatomic) BOOL checked;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)configAgreement;
- (void)protocolCheckBoxTapped;
- (double)protocolHeight;
- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFlowManager:(id)a0;

@end
