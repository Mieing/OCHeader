@class NSString, UITextField, InputMobileItem, UIView, KindaRichLabelViewV2;
@protocol WCPayEcardModelViewDelegate;

@interface WCPayEcardModelView : UIView <WCPayVoidCallbackDelegate>

@property (retain) InputMobileItem *item;
@property (retain) UITextField *textField;
@property (retain) UIView *line;
@property (retain) KindaRichLabelViewV2 *tipsLabel;
@property (retain) NSString *mobileInputed;
@property BOOL hasBeenEdited;
@property (weak) id<WCPayEcardModelViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMobile:(id)a0;
- (id)text;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onKeyboardDidShow:(id)a0;
- (void)onKeyboardWillHide:(id)a0;
- (void)updateWithInputItem:(id)a0;
- (void)layoutSubviews;
- (void)updateTextField;
- (void)updateLine;
- (void)updateTipsLabel;
- (unsigned long long)colorFromString:(id)a0;
- (void)onWCPayVoidCallbackWithUserInfo:(id)a0;
- (void)textFieldDidChange;
- (void).cxx_destruct;

@end
