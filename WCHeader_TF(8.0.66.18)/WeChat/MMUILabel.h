@class NSString, UILongPressGestureRecognizer, UIColor;

@interface MMUILabel : UILabel <MultiLineTextView, UIGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressCopyGesture;
@property (nonatomic) unsigned long long textStyle;
@property (nonatomic) BOOL useRedesignLinespacing;
@property (nonatomic) double linespacingFactor;
@property (nonatomic) double fixedLineHeight;
@property (nonatomic) BOOL enableLongPressCopy;
@property (retain, nonatomic) UIColor *highlightCopyColor;
@property (retain, nonatomic) NSString *textToCopy;
@property (nonatomic) BOOL wantsExtendedDynamicRangeContent;
@property (nonatomic) double edrHeadroom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)DynamicLabel:(id)a0 textStyle:(unsigned long long)a1;
+ (id)dotWithMultilineIntros:(id)a0 font:(id)a1 textColor:(id)a2;

- (void)sizeToFitWidth:(double)a0;
- (void)applyMultiLineConfig:(id)a0;
- (void)setMultilineText:(id)a0;
- (void)setMultilineAttrText:(id)a0;
- (double)baselineOffset;
- (id)paragraphStyle;
- (void)setText:(id)a0 lineSpacing:(double)a1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTextStyle:(unsigned long long)a0;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNumberOfLines:(long long)a0;
- (void)setText:(id)a0;
- (void)setTextColor:(id)a0;
- (void)setAttributedText:(id)a0;
- (double)calcLineSpacing;
- (void)setDotWithMultilineIntros:(id)a0;
- (void)menuItemHidden:(id)a0;
- (void)longPressToCopy:(id)a0;
- (void)onLongPressCopy:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (double)dotLeadIndent;
- (void).cxx_destruct;

@end
