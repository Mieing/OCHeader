@class NSString, RichTextView;
@protocol WCFinderFittingWidthRichViewDelegate;

@interface WCFinderFittingWidthRichView : UIView <ILinkEventExt>

@property (nonatomic) long long contentLineNumber;
@property (nonatomic) BOOL currentExpanded;
@property (weak, nonatomic) id<WCFinderFittingWidthRichViewDelegate> delegate;
@property (retain, nonatomic) RichTextView *textView;
@property (nonatomic) long long lineNumber;
@property (nonatomic) long long expandLimitNumber;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL expandOnce;
@property (readonly, nonatomic) BOOL displayExpand;
@property (readonly, nonatomic) long long currentLineNumber;
@property (copy, nonatomic) id /* block */ onClickUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configExpandable;
- (long long)displayLineNumber;
- (id)generateDisplayedIntroductionContent;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)lineNumberCountForStyleArr:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onTextLongPressed:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onCopy:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;

@end
