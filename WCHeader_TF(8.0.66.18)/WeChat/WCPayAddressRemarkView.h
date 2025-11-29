@class UIColor, UIButton, NSString, UIView, RichTextView, WCPayAddressInfo;
@protocol WCPayAddressRemarkViewDelegate;

@interface WCPayAddressRemarkView : UIView <RichTextLayoutDelegate>

@property (retain) WCPayAddressInfo *address;
@property double fontSize;
@property (retain) UIColor *fontColor;
@property (retain) UIView *m_highlightView;
@property (retain) RichTextView *m_textView;
@property (retain) UIButton *m_button;
@property double addressMaxLine;
@property (weak) id<WCPayAddressRemarkViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithAddress:(id)a0 fontSize:(double)a1 fontColor:(id)a2;
- (void)updateAddress:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateHighlightView;
- (void)updateTextView;
- (void)updateButton;
- (void)onClickButton;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void)handleLongPressGestureRecognizer:(id)a0;
- (void)handleMenuControllerWillHideMenuNotification:(id)a0;
- (void)onCopy:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;

@end
