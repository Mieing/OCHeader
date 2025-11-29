@class NSString, WCCoinConsumePanel, UIView, RichTextView, UIButton;

@interface WCCoinConsumePanelDetailView : UIView <ILinkEventExt>

@property (weak, nonatomic) WCCoinConsumePanel *parent;
@property (retain, nonatomic) UIView *protocolView;
@property (retain, nonatomic) UIButton *selectBoxButton;
@property (retain, nonatomic) RichTextView *protocolTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParent:(id)a0;
- (void)layout;
- (void)layoutTitle;
- (void)layoutAmountView;
- (void)layoutAgreement;
- (void)layoutButton;
- (void)layoutLink;
- (void)shakeAgreementView;
- (void)consume;
- (void)clickSelectBox;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)parameter;
- (void).cxx_destruct;

@end
