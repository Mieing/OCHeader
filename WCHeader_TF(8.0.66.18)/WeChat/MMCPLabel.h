@class NSString, UIColor, UILongPressGestureRecognizer;
@protocol MMCPLabelDelegate;

@interface MMCPLabel : MMUILabel {
    UILongPressGestureRecognizer *m_recognizer;
    NSString *m_restoreStr;
    BOOL m_bRegisterObserver;
}

@property (retain, nonatomic) NSString *cpKey;
@property (nonatomic) BOOL showRestoreMenuItem;
@property (weak, nonatomic) id<MMCPLabelDelegate> cpLabelDelegate;
@property (nonatomic) BOOL showCopyMenuItem;
@property (retain, nonatomic) NSString *prefixTitle;
@property (retain, nonatomic) UIColor *hlBackgroundColor;
@property (nonatomic) BOOL isHighlighted;

+ (double)labelHeight:(id)a0 maxWidth:(double)a1 font:(id)a2 cpKey:(id)a3;
+ (double)labelWidth:(id)a0 maxWidth:(double)a1 font:(id)a2 cpKey:(id)a3;

- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)handleLongPressGestureRecognizer:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onRestore:(id)a0;
- (void)onCopy:(id)a0;
- (void)handleMenuControllerWillHideMenuNotification:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
