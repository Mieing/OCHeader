@class UIButton, RichTextView, NSString;

@interface WCPayAgreementView : UIView <ILinkEventExt>

@property (retain, nonatomic) UIButton *checkbox;
@property (retain, nonatomic) RichTextView *textView;
@property (nonatomic) BOOL checked;
@property (copy, nonatomic) id /* block */ onLinckClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCheckboxSize:(double)a0 checkedColor:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTextMaxWidth:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onClickCheckbox;
- (void)shake;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
