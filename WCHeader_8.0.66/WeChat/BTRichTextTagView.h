@class NSString, RichTextView, UIView;

@interface BTRichTextTagView : UIView

@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) NSString *tagAccessibilityLabel;
@property (nonatomic) double limitWidth;
@property (nonatomic) unsigned long long limitLineNumber;
@property (nonatomic) double customTextTagLeftSpacing;
@property (nonatomic) double customTextTagBottomSpacing;

+ (struct CGSize { double x0; double x1; })sizeForContent:(id)a0 font:(id)a1 limitWidth:(double)a2 lineSpacing:(double)a3 limitLineNumber:(unsigned long long)a4 outArrStyles:(id *)a5 hasTag:(BOOL)a6 tagSize:(struct CGSize { double x0; double x1; })a7 spacingDic:(id)a8;
+ (struct CGSize { double x0; double x1; })sizeForContent:(id)a0 font:(id)a1 limitWidth:(double)a2 lineSpacing:(double)a3 limitLineNumber:(unsigned long long)a4 parserType:(unsigned long long)a5 outArrStyles:(id *)a6 hasTag:(BOOL)a7 tagSize:(struct CGSize { double x0; double x1; })a8 spacingDic:(id)a9;
+ (double)lastLineWidth:(id)a0;
+ (BOOL)canTagAddByLineEnd:(id)a0 tagSize:(struct CGSize { double x0; double x1; })a1 limitWidth:(double)a2;
+ (BOOL)canTagAddByLineBreak:(id)a0 limitLineNumber:(unsigned long long)a1;

- (void)removeFromSuperview;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTextColor:(id)a0;
- (void)setTagViewHidden:(BOOL)a0;
- (void)setTagView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setTagViewAccessibilityLabel:(id)a0;
- (void)updateWithArrStyles:(id)a0 limitWidth:(double)a1 limitLineNumber:(unsigned long long)a2;
- (void)updateWithArrStyles:(id)a0 limitWidth:(double)a1 limitLineNumber:(unsigned long long)a2 content:(id)a3 spacingDic:(id)a4;
- (void)fitSize;
- (void)setSubviewOrigin;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
