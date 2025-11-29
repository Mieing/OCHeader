@class NSString, UIView, RichTextView, UITapGestureRecognizer;
@protocol BrandProfileRichTextTagViewDelegate;

@interface BrandProfileRichTextTagView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) RichTextView *richTextView;
@property (retain, nonatomic) UIView *tagView;
@property (nonatomic) double limitWidth;
@property (nonatomic) unsigned long long limitLineNumber;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) UIView *tagImageView;
@property (weak, nonatomic) id<BrandProfileRichTextTagViewDelegate> textTagViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeForContent:(id)a0 font:(id)a1 limitWidth:(double)a2 lineSpacing:(double)a3 limitLineNumber:(unsigned long long)a4 outArrStyles:(id *)a5 hasTag:(BOOL)a6 tagImageSize:(struct CGSize { double x0; double x1; })a7;
+ (long long)getCurrentLinesWithFont:(id)a0 lineSpacing:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (double)lastLineWidth:(id)a0;
+ (BOOL)canTagAddByLineEnd:(id)a0 tagSize:(struct CGSize { double x0; double x1; })a1 limitWidth:(double)a2;
+ (BOOL)canTagAddByLineBreak:(id)a0 limitLineNumber:(unsigned long long)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupTapGesture;
- (void)onTap;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setTextColor:(id)a0;
- (void)setTagViewHidden:(BOOL)a0;
- (void)setTagView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)updateWithArrStyles:(id)a0 limitWidth:(double)a1 limitLineNumber:(unsigned long long)a2;
- (void)initSubviews;
- (void)layoutTagView;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
