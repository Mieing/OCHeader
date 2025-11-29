@class UITextView, NSArray, UIColor, NSAttributedString, NSMutableArray;
@protocol KindaUILabelDelegate;

@interface KindaUILabel : UILabel

@property (retain, nonatomic) NSAttributedString *backupAttributedText;
@property (retain, nonatomic) UITextView *textView;
@property (weak, nonatomic) id<KindaUILabelDelegate> delegate;
@property (retain, nonatomic) NSArray *highlightRanges;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) NSArray *bkgDataItems;
@property (retain, nonatomic) NSMutableArray *links;
@property (nonatomic) long long expandHitWidth;
@property (nonatomic) long long expandHitHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)indexInLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)rangeForIndex:(long long)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawTextBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)refreshAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)makeAccessibilityElements;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
