@class UIColor, NSString, UIFont, NSParagraphStyle;

@interface IESIMTextViewInternal : UITextView

@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (retain, nonatomic) UIFont *placeholderFont;
@property (nonatomic) BOOL displayPlaceHolder;
@property (nonatomic) BOOL useLineFragmentPadding;
@property (nonatomic) BOOL disableGrowing;
@property (nonatomic) BOOL disableFixOverscroll;
@property (nonatomic) double lineSpacing;
@property (nonatomic) BOOL prohibitPerformAction;
@property (retain, nonatomic) NSParagraphStyle *placeholderParagraphStyle;
@property (copy, nonatomic) id /* block */ touchesBeganBlock;
@property (copy, nonatomic) id /* block */ selectedTextRangeChangedBlock;
@property (copy, nonatomic) id /* block */ textViewPasted;
@property (copy, nonatomic) id /* block */ overrideCanPerformAction;
@property (nonatomic) BOOL shouldNotBlockGesture;
@property (nonatomic) BOOL disableNestedScrollViewOpt;

- (void)setScrollable:(BOOL)a0;
- (void)copy:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (void)cut:(id)a0;
- (void)setSelectedTextRange:(id)a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)paste:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
