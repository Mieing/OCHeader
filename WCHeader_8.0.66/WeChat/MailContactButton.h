@class CMailContact, UIButton;
@protocol MailContactButtonDelegate;

@interface MailContactButton : UIView {
    UIButton *m_btnMailContactButton;
}

@property (weak, nonatomic) id<MailContactButtonDelegate> m_delegate;
@property (retain, nonatomic) CMailContact *m_oMailContact;

- (id)initWithMailContact:(id)a0;
- (void)createButton;
- (void)onReceiverBtnClick:(id)a0;
- (void)onReceiverBtnRepeatClick:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)isHighlighted;
- (void).cxx_destruct;

@end
