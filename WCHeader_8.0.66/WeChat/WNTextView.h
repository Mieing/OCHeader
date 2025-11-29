@class NSString, NSMutableArray, UILabel;
@protocol WNTextViewDataDelegate, WNTextViewOperationDelegate;

@interface WNTextView : RTETextView <WNAccessibilityElementDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray *m_accessiblityElement;
    NSMutableArray *m_accessiblityMenuItems;
    unsigned long long m_accessiblityMenuItemIndex;
    NSMutableArray *m_urlArray;
    NSString *m_touchUrl;
    UILabel *m_placeHolder;
    BOOL m_onTouch;
    struct CGPoint { double x; double y; } m_touchPoint;
    BOOL m_readyToShowMMMenu;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WNTextViewDataDelegate> dataDelegate;
@property (weak, nonatomic) id<WNTextViewOperationDelegate> operationDelegate;
@property (nonatomic) BOOL needUpdateAccessbility;
@property (nonatomic) unsigned int enterNoteScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)accessibilityElementCount;
- (void)updateMenuRotor;
- (void)initMenuRotor;
- (void)tryUpdateAccessbilityElement;
- (BOOL)isAccessibilityElement;
- (void)onBecomeFocus:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPlaceHolder:(id)a0;
- (void)setPlaceHolderHidden:(BOOL)a0;
- (void)updatePlaceHolder;
- (id)snapshop;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (id)selectionRectsForRange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)tryScrollTouchPointToVisible;
- (void)menuWillHide;
- (id)editMenuForTextRange:(id)a0 suggestedActions:(id)a1;
- (void)tryToShowMMMenu;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canBecameFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)keyCommands;
- (void)onDelete:(id)a0;
- (void)onCopy:(id)a0;
- (void)onCut:(id)a0;
- (void)onPaste:(id)a0;
- (void)onEdit:(id)a0;
- (void)setBoldFromKey:(id)a0;
- (void)setHighlightFromKey:(id)a0;
- (void)setLargeImage:(id)a0;
- (void)setSmallImage:(id)a0;
- (void)paste:(id)a0;
- (void)select:(id)a0;
- (void)selectAll:(id)a0;
- (void)onEditOrderList:(id)a0;
- (void)tryShowLinkStyle;
- (BOOL)handleTouchLinkArea:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleLinkClick;
- (void)jumpLink;
- (id)webviewWCPayScene;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)calculateTouchAreaUrl:(id)a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)setAttributedText:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)onPanAction:(id)a0;
- (void).cxx_destruct;

@end
