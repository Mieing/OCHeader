@interface FlowMarkdownX.FlowMarkdownTextView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate> {
    void /* unknown type, empty encoding */ interactLink;
    void /* unknown type, empty encoding */ textCopyAction;
    void /* unknown type, empty encoding */ isSubscribed;
    void /* unknown type, empty encoding */ markdownService;
    void /* unknown type, empty encoding */ selectable;
    void /* unknown type, empty encoding */ clickFrom;
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ animationLinkView;
    void /* unknown type, empty encoding */ layoutManager;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ doubleTapGesture;
    void /* unknown type, empty encoding */ longpresssGesture;
    void /* unknown type, empty encoding */ doubleClickPosition;
    void /* unknown type, empty encoding */ hasCurrentSelectedText;
    void /* unknown type, empty encoding */ textSelectedBlock;
    void /* unknown type, empty encoding */ shouldShowCustomMenu;
    void /* unknown type, empty encoding */ prevRects;
    void /* unknown type, empty encoding */ originalAttrStr;
    void /* unknown type, empty encoding */ direction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapIndicatorView;
    void /* unknown type, empty encoding */ selectRange;
    void /* unknown type, empty encoding */ selectColor;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)useSelectionForFind:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithTextAttachment:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)doubleTapGestureClick:(id)a0;
- (void)tapGestureClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
