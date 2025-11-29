@class NSString, RichTextView, MMUIButton;
@protocol MMAcceptAgreementProtocolViewDelegate;

@interface MMAcceptAgreementProtocolView : MMUIView <ILinkEventExt> {
    RichTextView *m_protocolTextView;
    BOOL m_isAgreedProtocol;
    MMUIButton *m_isAgreedProtocolButton;
    NSString *m_protocolText;
}

@property (weak, nonatomic) id<MMAcceptAgreementProtocolViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andProtocolText:(id)a1;
- (void)layoutSubviews;
- (void)layoutProtocolTextView;
- (void)layoutIsAgreedProtocolButton;
- (id)getLeftImage;
- (void)onClickAgreedProtocolBtn:(id)a0;
- (BOOL)isHadAgreedProtocol;
- (id)protocolButtonCheckedColor;
- (id)protocolButtonUncheckedColor;
- (id)protocolTextColor;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
