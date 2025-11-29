@class WCCoinSubscriptionAgreementView, NSString, UIView, RichTextView, UIButton;

@interface WCCoinSubscriptionAgreementDetailView : UIView <ILinkEventExt>

@property (weak, nonatomic) WCCoinSubscriptionAgreementView *parent;
@property (retain, nonatomic) UIView *protocolView;
@property (retain, nonatomic) RichTextView *protocolTextView;
@property (retain, nonatomic) UIButton *selectBoxButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParent:(id)a0;
- (void)layoutTitle;
- (void)layoutContent;
- (void)layoutProtocol;
- (void)layout;
- (void)layoutSubviews;
- (void)shakeAgreementView;
- (void)clickSelectBox;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
